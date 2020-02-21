#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
};

int height(Node* root) {
    
    if(root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    if(root->left != NULL && root->right == NULL) 
    {
        return 1 + height(root->left);  
    }
    if(root->right != NULL && root->left == NULL) 
    {
        return 1 + height(root->right);  
    }
    else
    {
        return 1 + height(root->left) + height(root->right);
    }
}

int main(){

    Node *node5 = new Node();
    node5->data = 40;
    node5->left = NULL;
    node5->right = NULL;

    Node *node4 = new Node();
    node4->data = 15;
    node4->left = NULL;
    node4->right = NULL;

    Node *node3 = new Node();
    node3->data = 5;
    node3->left = NULL;
    node3->right = NULL;

    Node *node2 = new Node();
    node2->data = 30;
    node2->left = NULL;
    node2->right = node5;

    Node *node1 = new Node();
    node1->data = 10;
    node1->left = node3;
    node1->right = node4;

    Node *arvore = new Node();
    arvore->data = 20;
    arvore->left = node1;
    arvore->right = node2;
    
    cout << height(arvore) << '\n';
    return 0;
}