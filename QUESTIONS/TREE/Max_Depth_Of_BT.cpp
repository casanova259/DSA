#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/**
 * Definition for a binary tree node.
 *
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

 //usignf the level order traversal
class Solution
{
public:
    int solve(TreeNode *root)
    {
        int level = 0;
        // if root ==null then we return 0
        if (root == NULL)
            return 0;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            // we will get the size of the level
            int size = q.size();

            // increment the level by 1
            level += 1;

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                if (node->left != NULL)
                {
                    q.push(root->left);
                }
                if (node->right != NULL)
                {
                    q.push(root->right);
                }
            }
        }

        return level;
    }
    int maxDepth(TreeNode *root) { return solve(root); }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root==NULL) return 0;

        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};
class DFS
{
    public:
        int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;

        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
        
};
int main()
{
    // created by manik sharma

    return 0;
}