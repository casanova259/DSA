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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *start = head;
        ListNode *node = NULL;

        while (start)
        {
            ListNode *temp = start->next; // temp to head ka next
            start->next = node;

            // now move to further
            node = start;
            start = temp;
        }

        return node;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}