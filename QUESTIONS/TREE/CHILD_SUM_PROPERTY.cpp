#include <iostream>
#include <vector>
using namespace std;


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};



class Solution {
  public:
  
  
    
    bool isSumProperty(Node *root) {
        // code here
        
        //BC 
        if(root==NULL) return true;
        
        if(!root->left&&!root->right) return true;
        
        int leftVal=0,rightVal=0;
        
        if(root->left) leftVal=root->left->data;
        if(root->right) rightVal=root->right->data;
        
        if (root->data == leftVal + rightVal &&
            isSumProperty(root->left) &&
            isSumProperty(root->right)) {
            return true;
        }
        
        return false;
    }
};
int main()
{
//created by manik sharma

return 0 ;
}