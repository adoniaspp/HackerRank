#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
};

bool raiz = true;

int height(Node* root) {
    
    if(raiz)
    {
        int alturaDireita = 0;
        int alturaEsquerda = 0;
        raiz = false;
        if(root->left != NULL){
            alturaEsquerda = height(root->left)+1;
        }
        if(root->left != NULL){
            alturaDireita = height(root->right)+1;
        }
        if(alturaDireita>alturaEsquerda){
            return alturaDireita;
        }else{
            return alturaEsquerda;
        }
    }else{
    raiz = false;    
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
}

int main(){

/*  15

    1 3 2 5 4 6 7 9 8 11 13 12 10 15 14*/

    Node *node6 = new Node();
    node6->data = 35;
    node6->left = NULL;
    node6->right = NULL;

    Node *node5 = new Node();
    node5->data = 40;
    node5->left = node6;
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

    Node *arvore2 = new Node();
    arvore->data = 0;
    arvore->left = NULL;
    arvore->right = NULL;
    
    cout << height(arvore2) << '\n';
    return 0;
}