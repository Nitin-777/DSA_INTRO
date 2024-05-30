#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};
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

    p->left=p1;
    p->right=p2;
    return 0;
}


