#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};
void preorder(struct node *root){
 if(root!=NULL){
    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
 }
}
void postorder(struct node * root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\n", root->data);
    }

}
void inorder(struct node * root){
    if(root!=NULL){
    inorder(root->left);
    printf("%d \n",root->data);
    inorder(root->right);
}
}
struct node *binarysearch(struct node* root,int key){

    if(root->data==key){
        return root;
    } 
    else if (key<root->data)
{
        return binarysearch(root->left,key);
    }
    else if(key>root->data){
        return binarysearch(root->right, key);
    }
}
int main(){
    struct node *p=malloc(sizeof(struct node));
    p->data=5;
    p->left=NULL;
    p->right=NULL;
    

    struct node *p1=malloc(sizeof(struct node));
    p1->data=3;
    p1->left=NULL;
    p1->right=NULL;


    struct node *p2=malloc(sizeof(struct node));
    p2->data=6;
    p2->left=NULL;
    p2->right=NULL;

      struct node *p3=malloc(sizeof(struct node));
    p3->data=1;
    p3->left=NULL;
    p3->right=NULL;

      struct node *p4=malloc(sizeof(struct node));
    p4->data=4;
    p4->left=NULL;
    p4->right=NULL;

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    //inorder(p);
    struct node*  n= binarysearch(p,70);
    if(n!=NULL){
        printf("%d" ,n->data);
         }
    else{ 
    printf("element not found");
    }
        return 0;
}