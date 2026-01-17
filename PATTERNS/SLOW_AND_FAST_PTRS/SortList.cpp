#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *ptr) : val(x), next(ptr) {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *getmiddle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode *mergeList(ListNode *left, ListNode *right)
    {

        if (left == 0)
            return right;
        if (right == 0)
            return left;

        ListNode *ans = new ListNode(-1);
        ListNode *mptr = ans;

        while (left && right)
        {

            if (left->val < right->val)
            {
                mptr->next = left;
                mptr = left;
                left = left->next;
            }

            else
            {
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }
        if (left)
        {
            mptr->next = left;
            mptr = left;
        }
        if (right)
        {
            mptr->next = right;
            mptr = right;
        }

        return ans->next;
    }
    ListNode *sortList(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *middle = getmiddle(head);
        ListNode *right = middle->next;
        middle->next = nullptr;
        ListNode *left = head;

        left = sortList(left);
        right = sortList(right);

        return mergeList(left, right);
    }
};
int main()
{
    // created by manik sharma

    return 0;
}

/*
class Solution {
public:
    ListNode* getmiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right) {

        if (!left)
            return right;
        if (!right)
            return left;

        ListNode* ans = new ListNode(-1, NULL);
        ListNode* mptr = ans;

        while (left && right) {
            if (left->val < right->val) {
                mptr->next = left;
                mptr = left;
                left = left->next;
            } else {
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }

        if (left) {
            mptr->next = left;
        }
        if (right) {
            mptr->next = right;
        }

        return ans->next;
    }
    ListNode* sortList(ListNode* head) {

        if (!head || !head->next)
            return head;

        ListNode* middle = getmiddle(head);
        ListNode* left = head;
        ListNode* right = middle->next;
        middle->next = nullptr;

        left = sortList(left);
        right = sortList(right);

        ListNode* mergedLL = merge(left, right);

        return mergedLL;
    }
};
*/