#include <iostream>
#include <vector>
using namespace std;

template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

bool solve(TreeNode<int> *root, int x, vector<int> &ans)
{
    if (root == NULL)
        return false;

    // current node ko add kro
    ans.push_back(root->data);

    // then check kro kya tumhe woh mil gya jo chahiye
    if (root->data == x)
        return true;

    if (solve(root->left, x, ans) || solve(root->right, x, ans))
    {
        // ab agr right aur left m se kahi pe bhi mil gya toh true return krdo
        return true;
    }

    // nahi mila toh backtrack kro
    ans.pop_back();

    return false;
};

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
    vector<int> ans;

    solve(root, x, ans);

    return ans;
}

int main()
{
    // created by manik sharma

    return 0;
}