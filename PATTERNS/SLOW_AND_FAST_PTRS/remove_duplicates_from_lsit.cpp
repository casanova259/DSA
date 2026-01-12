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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = head;

        while (prev != nullptr) {
            while (prev->next != nullptr && prev->val == prev->next->val) {
                prev->next = prev->next->next;
            }
            prev = prev->next;
        }
        return head;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}