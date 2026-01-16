#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x,ListNode* ptr) : val(x),next(ptr){}
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == nullptr)
            return nullptr;

        ListNode *ans = new ListNode(0, head);
        // ek ans node banao nahi linked list ko return krne ke liye
        // why not existing cz if head ki val wwoh huyi jo remove krni h
        // toh isi se hojayega alg se handle nhi krna pdega tumhe]

        // create a dummy node
        ListNode *dummy = ans;

        while (dummy != nullptr)
        {
            // jab tk dummy null nhi hojata
            while (dummy->next != nullptr && dummy->next->val == val)
            {
                dummy->next = dummy->next->next;
            }

            dummy = dummy->next;
        }

        // now creating the new one and delte the one u made
        ListNode *result = ans->next;
        delete ans;

        return result;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}

/*class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;

        //now create the ans node
        ListNode* ans=new ListNode(-1,head);
        ListNode* dummy=ans;


        while(dummy){
            while(dummy->next!=nullptr&&dummy->next->val==val){
               dummy->next=dummy->next->next;
            }
            dummy=dummy->next;
        }

        ListNode* res=ans->next;
        delete ans;
        return res;
    }
};*/
//REVISION-16jan 2026