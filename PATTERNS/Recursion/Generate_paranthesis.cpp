#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void solve(int n,int close,int open,vector<string>&ans,string s){
        //base case
        if (open == 0 && close == 0) {
            ans.push_back(s);
            return;
        }
         if(open>0){
            // s = ;
            solve(n,close,open-1,ans,s+'(');
        }  
         if(open<close){
            // s=s+')';
            solve(n,close-1,open,ans,s+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        solve(n,n,n,ans,"");
        return ans;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}