// to implement binary trees and perform all traversals(BST)
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* CreateTree(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
struct Node* insert(struct Node* root, int value){
    if(root == NULL){
        return CreateTree(value);
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    } 
    else if(value > root->data){
        root->right = insert(root->right, value);
    }
    return root;
}
struct Node* findMin(struct Node* root){
    while(root->left != NULL)
        root = root->left;
    return root;
}
struct Node* deleteLeaf(struct Node* root, int key){
    if(root == NULL) return NULL;

    
    if(root->data == key){
        
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        } else {
            printf("Node is not a leaf, cannot delete!\n");
            return root;
        }
    }

    root->left = deleteLeaf(root->left, key);
    root->right = deleteLeaf(root->right, key);

    return root;
}
void inorder(struct Node* root){
    if(root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct Node* root){
    if(root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main(){
    struct Node* root = NULL;
    int n, val, key;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &val);
        root = insert(root, val);
    }

    printf("Enter value to delete: ");
    scanf("%d", &key);

    root = deleteLeaf(root, key);
    printf("\nInorder = ");
    inorder(root);

    printf("\nPreorder = ");
    preorder(root);

    printf("\nPostorder = ");
    postorder(root);

    return 0;
}