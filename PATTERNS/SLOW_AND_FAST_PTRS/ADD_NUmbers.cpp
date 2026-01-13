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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // sabse pehle create a dummy node
        // sbse pehle banao dummy node aur res node
        ListNode *dummy = new ListNode(-1);
        ListNode *res = dummy;
        // hr processing k baad mtlb hr index pe add krne ke baad we cal total and the carry
        int total = 0, carry = 0;

        while (l1 || l2 || carry)
        {
            // loop conditon ya toh l1 hoi ya toh l2 aur  ya carry
            total = carry;

            if (l1)
            {
                // ab index pe aake u add l1 ki index ki value to the total
                total += l1->val;
                // move the ptr to the next
                l1 = l1->next;
            }

            if (l2)
            {
                // u do the same to the right and move the ptrr to the next
                total += l2->val;
                l2 = l2->next;
            }

            // now u have to extract the number if num <10 toh same number aa jayega now if
            // it is greater than 10 toh 13 so 3 digit and 1 goes to carry
            int num = total % 10;
            carry = total / 10;
            // dummy node ke aage total ka node lga do
            dummy->next = new ListNode(num);
            // dummy ko aage move krdo to connect the incoming total node to the answer list
            dummy = dummy->next;
        }

        // ab why we kept the result so that we can return the and keep track of the
        // ans node
        ListNode *result = res->next;
        delete res;
        return result;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}