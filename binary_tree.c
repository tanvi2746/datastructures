#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *left, *right;
};

struct Node* create(int data) {
    struct Node* node = (struct Node* )malloc(sizeof(struct Node));
    node -> data = data;
    node -> left = node -> right = NULL;
    return node;
}

void display(struct Node* root){
    if (root==NULL) return;
    printf("%d -> ",root->data);
    display(root->left);
    display(root->right);
}
int main(){
    struct Node* root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->left = create(4);
    root->left->right = create(5);
    
    printf("Preorder display:\n");
    display(root);
    printf("NULL");
  
    return 0;
}
