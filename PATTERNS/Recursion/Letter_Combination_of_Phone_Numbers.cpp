#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void solve(vector<string> &ans, int index, string digits, string output,
               vector<string> mapping)
    {

        if (index == digits.size())
        {
            // Add The Current Combination to the answer
            ans.push_back(output);
            return;
        }

        // convert the current Character to an integer
        int digit = digits[index] - '0';
        string value = mapping[digit];
        // loop through the corressponding charcter
        for (int i = 0; i < value.length(); i++)
        {
            char ch = value[i];
            // adding the character to output
            output.push_back(ch);
            // making the recursive call
            solve(ans, index + 1, digits, output, mapping);
            // backtracking
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;
        int index = 0;
        string output = "";
        vector<string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

        solve(ans, 0, digits, output, mapping);

        return ans;
    }
};
//5 March 2026
class Solution {
public:
    void solve(vector<string>& ans, int index, string digits, string output,
               vector<string> mapping) {
        
        if(index==digits.size())
        {
            //Add The Current Combination to the answer
            ans.push_back(output);
            return;
        }   

        //convert the current Character to an integer
        int digit=digits[index]-'0';
        string value=mapping[digit];
        //loop through the corressponding charcter
        for(int i=0;i<value.length();i++)
        {
            char ch=value[i];
            //adding the character to output
            output.push_back(ch);
            //making the recursive call
            solve(ans,index+1,digits,output,mapping);
            //backtracking
            output.pop_back();
        }     
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;
        int index = 0;
        string output = "";
        vector<string> mapping(10);
        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";
        

        solve(ans, 0, digits, output, mapping);

        return ans;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}
// {[...Array(10)].map((_, indx) => (
//   <motion.div
//     key={indx}
//     className="h-8 w-1.5 rounded-full bg-white"
//     animate={{ rotateX: [0, 360], scaleY: [1, 0.3, 1], opacity: [1, 0.3, 1] }}
//     transition={{ duration: 2, repeat: Infinity, ease: "easeInOut", delay: indx * 0.15 }}
//   />
// ))}