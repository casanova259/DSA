
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};
class Solution {
public:

    
    bool hasPathSum(TreeNode* root, int targetSum) {

        if(root==NULL) return false;
        

        targetSum-=root->val;

        if(!root->left&&!root->right&&targetSum==0)
        {
            return true;
        }

        bool left=hasPathSum(root->left,targetSum);
        bool right=hasPathSum(root->right,targetSum);


        return left||right;
    }
};

int main()
{
    // created by manik sharma

    return 0;
}
