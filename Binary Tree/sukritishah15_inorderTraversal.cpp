#include <iostream>
using namespace std;

/*
    Binary Tree looks like:
    
             1
           /  \
         2     3
        / \   / \
       4   5 6   7
       
*/

struct node{
    int data;
    struct node* left;
    struct node* right;
};

node* newnode(int data){
    struct node* temp = new node();
    temp->data = data;
    temp->left = temp->right = NULL;
}

void inorderTraversal(struct node* temp) { 
    if (temp == NULL) 
        return; 
    inorderTraversal(temp->left); 
    cout << temp->data << " "; 
    inorderTraversal(temp->right); 
} 

int main(){
    
    struct node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    
    inorderTraversal(root); 
    //Output will be : 4 2 5 1 6 3 7 
    
    return 0;
}

/*
    Time and Space Complexity : O(n)
    where n is no. of nodes in the tree.
*/