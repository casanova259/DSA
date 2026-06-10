#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int total = 0;
        int carry = 0;
        ListNode *ans = new ListNode(-1);
        ListNode *dummy = ans;

        while (l1 || l2 || carry)
        {

            total = carry;

            if (l1)
            {
                total += l1->val;
                l1 = l1->next;
            }

            if (l2)
            {
                total += l2->val;
                l2 = l2->next;
            }

            // now processing the total if total>10 so there will a carry
            int num = total % 10; // extracting the number
            carry = total / 10;
            dummy->next = new ListNode(num);
            dummy = dummy->next;
        }

        ListNode *result = ans->next;
        delete ans;
        return result;
    }
};