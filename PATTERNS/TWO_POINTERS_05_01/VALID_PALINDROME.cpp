#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;

        while(left<right)
        {
            while(left<right&&!isalnum(s[left])) left++;

            while(left<right&&!isalnum(s[right])) right--;

            if(tolower(s[left])!=tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

class Solution {
public:
    bool isalphanum(char ch)
    {
        if(
            (ch>='a'&&ch<='z')||
            (ch>='A'&&ch<='Z')||
            (ch>='0'&&ch<='9')
        )
        {
            return true;
        }

        return false;
    }
    char tolowerCase(char ch)
    {
        if(ch>='A'&&ch<='Z')
        {
            return ch-'A'+'a';
        }

        return ch;
    }
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;

        while(left<right)
        {
            while(left<right&&!isalphanum(s[left])) left++;

            while(left<right&&!isalphanum(s[right])) right--;

            if(tolowerCase(s[left])!=tolowerCase(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}