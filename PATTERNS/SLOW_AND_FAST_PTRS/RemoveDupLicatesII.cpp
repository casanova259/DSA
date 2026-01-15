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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        // step 1 : to create a dummy pointer and a prev ptr
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *prev = dummy;
        ListNode *curr = head;

        // step 2 is to traverse over the list using the curr ptr
        while (curr && curr->next)
        {
            // there we r checking that if the value of curr node is equal to its next if
            // so then we have to skip all of them to delete them
            if (curr->val == curr->next->val)
            {
                // if there are more than one or two duplicates then this loop will handle
                // them
                while (curr->next && curr->val == curr->next->val)
                {
                    curr = curr->next;
                }
                prev->next = curr->next;
                // Skip all Duplicates
            }
            else
            {
                prev = prev->next; // this helps us to move to the next unique node of the list
            }
            curr = curr->next;
        }

        // remember we kept an dummy ptr thats cz to return the new list we'll require that
        return dummy->next;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}