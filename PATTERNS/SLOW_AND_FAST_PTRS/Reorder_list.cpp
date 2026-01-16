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
    void reorderList(ListNode *head)
    {

        // step 1 :find the middle of the linked list
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // now the slow points at the mid of the linked list

        // STEP 2: we reverse the second half
        // starting from the node after slow , we use a standard iterative
        // reversal process to  reverse the ptrs
        ListNode *second = slow->next;
        slow->next = nullptr;
        ListNode *node = NULL;

        while (second)
        {
            ListNode *temp = second->next;
            second->next = node;
            node = second;
            second = temp;
        }

        // STEP #:Merge The Two Halves
        ListNode *first = head;
        second = node;

        while (second)
        {
            ListNode *temp1 = first->next;
            ListNode *temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};
int main()
{
    // created by manik sharma

    return 0;
}



/*
// REVISION - 16 jan 26
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     void reorderList(ListNode* head) {
//         ListNode* slow=head;
//         ListNode* fast=head ;

//         while(fast&&fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }

//         //now here the slow reaches the mid of the linked list
//         ListNode* second=slow->next;
//         slow->next=nullptr;
//         //so we did this to make the new list seperately and merge them afterwards
//         ListNode* node=NULL;

//         while(second){
//             //now the logic to reverse the list 
//             ListNode* temp=second->next;
//             //jo node h thats the head ofnew reversed linked list
//             second->next=node;
//             node=second;
//             second=temp;
//         }

//         ListNode* first=head;
//          second=node;

//         while(second){
//             ListNode* temp1=first->next;
//             ListNode* temp2=second->next;

//             first->next=second;
//             second->next=temp1;

//             first=temp1;
//             second=temp2;
//         }
//     }
// };*/