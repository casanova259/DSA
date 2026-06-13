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
    int getlength(ListNode *head)
    {
        int len = 0;
        while (head)
        {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0)
            return head;

        // Step 1: Calculate the length of the list
        int len = getlength(head);

        // Step 2: Calculate the effective number of rotations
        int actualrotateK = k % len;
        if (actualrotateK == 0)
            return head;

        // Step 3: Find the new last node (len - actualrotateK - 1)
        int lastnodepos = len - actualrotateK - 1;
        ListNode *newlastnode = head;
        for (int i = 0; i < lastnodepos; i++)
        {
            newlastnode = newlastnode->next;
        }

        // Step 4: Set up the new head and reconnect the list
        ListNode *newHead = newlastnode->next;
        newlastnode->next = nullptr;

        // Find the tail of the rotated part and connect it to the original head
        ListNode *it = newHead;
        while (it->next)
        {
            it = it->next;
        }
        it->next = head;

        return newHead;
    }
};

int main()
{
    // created by manik sharma

    return 0;
}