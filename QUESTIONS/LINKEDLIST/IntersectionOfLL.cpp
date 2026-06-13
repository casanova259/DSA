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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *a = headA;
        ListNode *b = headB;

        while (a->next && b->next)
        {
            if (a == b)
            {
                return a;
            }
            a = a->next; // ek linked list ke head ko null pe point krwa denge
                         // fir hume pta chalega konsi ll badi h
            b = b->next;
        }
        if (a->next == NULL && b->next == NULL && a != b)
            return NULL;
        if (a->next == 0)
        {
            int blen = 0;
            while (b->next)
            {
                b = b->next;
                blen++;
            }
            while (blen--)
            {
                headB = headB->next;
            }
        }
        else
        {
            int alen = 0;
            while (a->next)
            {
                a = a->next;
                alen++;
            }
            while (alen--)
            {
                headA = headA->next;
            }
        }
        while (headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};