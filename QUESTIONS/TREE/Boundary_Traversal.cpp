#include <iostream>
#include <vector>
using namespace std;



    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };


bool isLeaf(TreeNode<int> *root)
{
    return !root->left && !root->right;
}

void addLeft(TreeNode<int> *root, vector<int> &result)
{
    // etxract the current node as curr
    TreeNode<int> *curr = root->left;

    // then till the curr node exists
    while (curr)
    {
        // if the node != leaf node then pus it in res
        if (!isLeaf(curr))
        {
            result.push_back(curr->data);
            // return;
        }

        if (curr->left)
        {
            curr = curr->left;
        }

        else
        {
            curr = curr->right;
        }
    }
}
void addRight(TreeNode<int> *root, vector<int> &result)
{
    // etxract the current node as curr
    TreeNode<int> *curr = root->right;
    vector<int> temp;

    // then till the curr node exists
    while (curr)
    {
        // if the node != leaf node then pus it in res
        if (!isLeaf(curr))
        {
            temp.push_back(curr->data);
        }

        if (curr->right)
        {
            curr = curr->right;
        }

        else
        {
            curr = curr->left;
        }
    }

    for (int i = temp.size() - 1; i >= 0; i--)
    {
        result.push_back(temp[i]);
    }
}

void addLeaf(TreeNode<int> *root, vector<int> &result)
{
    // agr node leaf h toh add krdo
    if (isLeaf(root))
    {
        result.push_back(root->data);
        // return;
    }

    if (root->left)
    {
        addLeaf(root->left, result);
    }

    if (root->right)
    {
        addLeaf(root->right, result);
    }
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> result;
    if (root == NULL)
        return result;

    if (!isLeaf(root))
    {
        result.push_back(root->data);
    }

    addLeft(root, result);
    addLeaf(root, result);
    addRight(root, result);

    return result;
}

int main()
{
    // created by manik sharma

    return 0;
}