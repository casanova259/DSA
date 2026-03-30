
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),right(right) {}
};

class Solution {
public:

    bool solve(TreeNode* root,long long int lb,long long int ub)
    {
        if(root==NULL)
        {
            return true;
        }

        if((root->val<ub&&root->val>lb)&&solve(root->left,lb,root->val)&&solve(root->right,root->val,ub))
        {
            return true;
        }

        return false;
    }
    bool isValidBST(TreeNode* root) {
        long long int lb=-4294967296;
        long long int ub=4294967296;

        bool ans=solve(root,lb,ub);

        return ans;
    }
};


class Solution {
public:
    bool solve(TreeNode* root, long long int ub, long long int lb) {

        if (root == NULL)
            return true;

        if (root->val >= ub || root->val <= lb)
            return false;

        return solve(root->left, root->val, lb) &&
            solve(root->right, ub, root->val);
    }
    bool isValidBST(TreeNode* root) {
        long long int ub = 4294967296;
        long long int lb = -4294967296;

        return solve(root, ub, lb);
    }
};

int main()
{
    // created by manik sharma

    return 0;
}