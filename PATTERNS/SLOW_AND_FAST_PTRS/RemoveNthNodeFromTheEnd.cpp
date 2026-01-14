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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *res = new ListNode(0, head);
        ListNode *dummy = res;

        // okay now let's move the res to ahead
        for (int i = 0; i < n; i++)
        {
            head = head->next;
        }

        // now we got head before at the node we had to delete
        while (head != nullptr)
        {
            head = head->next;
            dummy = dummy->next;
        }

        // this will make the dummy take the place of head
        dummy->next = dummy->next->next;

        ListNode *result = res->next;
        delete res;
        return result;
    }
};

int main()
{
    return 0;
}