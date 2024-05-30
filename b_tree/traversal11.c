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
    printf("%d\n",root->data);
    inorder(root->right);
}
}
int main(){
    struct node *p=malloc(sizeof(struct node));
    p->data=5;
    p->left=NULL;
    p->right=NULL;
    

    struct node *p1=malloc(sizeof(struct node));
    p1->data=34;
    p1->left=NULL;
    p1->right=NULL;


    struct node *p2=malloc(sizeof(struct node));
    p2->data=56;
    p2->left=NULL;
    p2->right=NULL;

      struct node *p3=malloc(sizeof(struct node));
    p3->data=20;
    p3->left=NULL;
    p3->right=NULL;

      struct node *p4=malloc(sizeof(struct node));
    p4->data=39;
    p4->left=NULL;
    p4->right=NULL;


      struct node *p5=malloc(sizeof(struct node));
    p5->data=63;
    p5->left=NULL;
    p5->right=NULL;

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p3->right=p4;
    p2->left=p5;
    ///////preorder(p);
    postorder(p);
    inorder(p);

      return 0;
}


