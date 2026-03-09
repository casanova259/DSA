#include <iostream>
#include <queue>
#include <limits>
#include <vector>
using namespace std;


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = 1e-9;
        dfs(root, maxSum);
        return maxSum;
    }

    int dfs(TreeNode* node, int& maxSum) {
        if (!node) {
            return 0;
        }

        // Now Recursively found left and right max path
        int left = max(0, dfs(node->left, maxSum));
        int right = max(0, dfs(node->right, maxSum));

        // now upadte the maxsum thorugh this
        maxSum = max(maxSum, left + right + node->val);

        return max(left, right) + node->val;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}