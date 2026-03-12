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
class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        // sabse pehle vector banao ans ko store krne k liye
        vector<vector<int>> result;

        // if root ==NULL then return empty result
        if (root == NULL)
            return result;

        // queue banao level  order Traversal k liye
        queue<TreeNode *> q;
        q.push(root);
        bool LToR = true;

        while (!q.empty())
        {
            // size nikalo
            int size = q.size();
            // temp ans ko  store krne ke liye
            vector<int> ans(size);

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                int index = LToR ? i : size - i - 1;
                ans[index] = node->val;

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            LToR = !LToR;

            result.push_back(ans);
        }

        return result;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}