

#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (!head)
            return 0;

        // step 1: clone the linked list with A" and A (old links and new links)
        Node *it = head;
        while (it)
        {
            Node *clonedNode = new Node(it->val);
            clonedNode->next = it->next;
            it->next = clonedNode;
            it = it->next->next;
        }
        // 2.assign random links of A' with the old nodes links
        it = head;
        while (it)
        {
            Node *clonedNode = it->next;
            clonedNode->random = it->random ? it->random->next : nullptr;
            it = it->next->next;
        }
        // 3.Dettach A'from A
        it = head;
        Node *clonedHead = it->next;
        while (it)
        {
            Node *ClonedNode = it->next;
            it->next = it->next->next;
            if (ClonedNode->next)
            {
                ClonedNode->next = ClonedNode->next->next;
            }
            it = it->next;
        }
        return clonedHead;
    }
};