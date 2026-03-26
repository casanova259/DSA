#include <iostream>
#include <vector>
using namespace std;
// Definition for a binary tree node.
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
    int findMaxValue(TreeNode* root) {
        if (root == nullptr)
            return -1;

        TreeNode* current = root;
        while (current->right != nullptr) {
            current = current->right;
        }
        return current->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {

        // if root is NULL
        if (root == NULL) {
            return nullptr;
        }

        if (key < root->val) {
            root -> left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }

        else {
            // apan ne ek case likha small and ek  large ab ek konsa reh gya eq
            // wala got that toh

            // case 1:leaf node
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return nullptr;
            }

            // case 2 :  Node with only one child
            else if (root->right == NULL) {
                // lleft child  only
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            //righit child only
            else if (root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            //case 4 :If there is both children
            else 
            {
                int  predecessorValue=findMaxValue(root->left);

                root->val=predecessorValue;

                root->left =deleteNode(root->left,predecessorValue);
            }
        }

        return root;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}