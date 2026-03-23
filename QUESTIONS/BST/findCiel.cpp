

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node() : data(0), left(nullptr), right(nullptr) {};
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
    Node(int x, Node *left, Node *right) : data(x), left(left), right(right) {}
};

class Solution
{
public:
    int findCeil(Node *root, int x)
    {
        int ceil = -1;

        while (root)
        {
            if (root->data == x)
                return x;

            if (root->data < x)
            {
                root = root->right;
            }

            else
            {
                ceil = root->data;
                root = root->left;
            }
        }

        return ceil;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}