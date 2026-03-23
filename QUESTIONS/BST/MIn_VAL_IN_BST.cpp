

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

int minVal(Node *root)
{
    // Write your code here.
    if (root == nullptr)
        return -1;

    if (root->left == nullptr)
        return root->data;

    if (root->left)
        minVal(root->left);
}

int main()
{
    // created by manik sharma

    return 0;
}