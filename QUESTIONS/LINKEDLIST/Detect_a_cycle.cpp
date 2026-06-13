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
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        bool isCycle = false;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                isCycle = true;
                break;
            }
        }

        if (!isCycle)
            return nullptr;

        // but agr linked list m cycle h toh
        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        return fast;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}