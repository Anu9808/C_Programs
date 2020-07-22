#include<stdio.h>
#include<stdlib.h>

typedef struct node{

  int key;
  struct node *left,*right;

 }st;


st *newNode(int key)
{
    st *temp = (st *)malloc(sizeof(st));
    temp ->key =key;
    temp ->left = temp->right = NULL;
    return temp;
}

void inorder(st *root)
 {
     if(root != NULL)
     {
         inorder(root->left);
         printf("%d \t",root->key);
         inorder(root->right);
     }
 }
void preorder(st *root)
 {
     if(root != NULL)
     {
         printf("%d \t",root->key);
         preorder(root->left);
         preorder(root->right);
     }
 }
void postorder(st *root)
 {
     if(root != NULL)
     {
         postorder(root->left);
         postorder(root->right);
         printf("%d \t",root->key);
     }
 }

st* insert(st* root, int key)
{
    if(root == NULL)
        return newNode(key);

    if(key < root->key)
        root->left = insert(root->left,key);

    else if(key > root->key)
        root->right = insert(root->right,key);

   return root;
}

int main()
{
    st *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 50);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    printf("Inorder Traversal:\t");
    inorder(root);
    printf("\n");
    printf("Preorder Traversal:t");
    preorder(root);
    printf("\n");
    printf("Postorder Traversal:\t");
    postorder(root);

 return 0;
}
