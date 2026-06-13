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
    bool isPalindrome(ListNode *head)
    {
        // sabse pehle extract kro
        vector<int> arr;

        while (head != nullptr)
        {
            arr.push_back(head->val);
            head = head->next;
        }

        // ab banao do ptrs aur array pe traverse krlo
        int left = 0;
        int right = arr.size() - 1;

        while (left < right)
        {

            if (arr[left] != arr[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
};