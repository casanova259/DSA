#include <iostream>
#include <vector>
using namespace std;
class BRUTE {
public:
    int numberOfSubstrings(string s) {
        //we create an array to store the freq of the characters
        vector<int>freq(3,0);

        //resultult to store the count of valid substring
        int result=0;

        //initialise the string using the right pointer
        int left=0;

        //traverse the string using the right ptr
        for(int right=0;right<s.length();right++){
            
            //update the freq of the curr substring
            freq[s[right]-'a']++;

            //shrink the window from the left while all chars are presultent
            while(freq[0]>0&&freq[1]>0&&freq[2]>0){
                
                //updating the result 
                result+=(s.length()-right);

                //after this decrease the freq of the char at left  and move the left
                //forward
                freq[s[left]-'a']--;
                left++;
            }

        }

        return result;
    }
};
class OPTIMAL {
public:
    int numberOfSubstrings(string s) {
        //we create an array to store the freq of the characters
        vector<int>freq(3,0);

        //resultult to store the count of valid substring
        int result=0;

        //initialise the string using the right pointer
        int left=0;

        //traverse the string using the right ptr
        for(int right=0;right<s.length();right++){
            
            //update the freq of the curr substring
            freq[s[right]-'a']++;

            //shrink the window from the left while all chars are presultent
            while(freq[0]>0&&freq[1]>0&&freq[2]>0){
                
                //updating the result 
                result+=(s.length()-right);

                //after this decrease the freq of the char at left  and move the left
                //forward
                freq[s[left]-'a']--;
                left++;
            }

        }

        return result;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}