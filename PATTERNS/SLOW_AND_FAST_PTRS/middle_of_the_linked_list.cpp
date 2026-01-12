#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=NULL&&fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}