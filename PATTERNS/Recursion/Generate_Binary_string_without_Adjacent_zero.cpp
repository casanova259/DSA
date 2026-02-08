#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void generate(string s, int n, vector<string>& res) {
        if (s.length() == n) {
            res.push_back(s);
            return;
        }

        s.push_back('1');
        generate(s, n, res);
        s.pop_back();

        if (s.empty() || s.back() != '0') {
            s.push_back('0');
            generate(s, n, res);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        vector<string> ans;
        generate("", n, ans);
        return ans;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}