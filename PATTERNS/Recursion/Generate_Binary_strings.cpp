#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
  
    void generate(string s,int n,vector<string>&result)
    {
        if(s.length()==n)
        {
            result.push_back(s);
            return;
        }
        
        generate(s+'0',n,result);
        
        generate(s+'1',n,result);
        
    }
    
    vector<string> binstr(int n) {
        // code here
        vector<string> ans;
        generate("",n,ans);
        return ans;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}