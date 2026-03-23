

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

 
class Solution {
  public:
    int findFloor(Node* root, int x) {
        // code here
        int floor=-1;
        
        while(root)
        {
            if(root->data==x)
            {
                return x;
            }
            
            if(root->data>x)
            {
                root=root->left;
            }
            
            else
            {
                floor=root->data;
                root=root->right;
            }
        }
        
        return floor;
    }
};
int main()
{
    // created by manik sharma

    return 0;
}