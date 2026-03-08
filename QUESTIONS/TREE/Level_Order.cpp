#include <iostream>
#include<queue>
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
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;

        // create a queue for nodes to store for each level
        queue<TreeNode *> q;
        q.push(root);

        // now we will iterate over the queu
        while (!q.empty())
        {
            // Get An Size of the level
            int size = q.size();
            // create a vector to store each level
            vector<int> level;

            for (int i = 0; i < size; i++)
            {
                // get the node
                TreeNode *node = q.front();
                // pop that node out of the queue
                q.pop();
                // push that valk into the current level array
                level.push_back(node->val);

                // nbow we have to ehck for the children nodes
                if (node->left != nullptr)
                {
                    q.push(node->left);
                }
                if (node->right != nullptr)
                {
                    q.push(node->right);
                }
            }
            ans.push_back(level);
        }

        return ans;
    }
};

int main()
{
    // created by manik sharma

    return 0;
}