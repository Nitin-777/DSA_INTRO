
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};

void insert(struct node*root, int key){
    struct node *ptr;
    ptr=root;
    while(root!=NULL){
        if(root->data==key){
            printf("unable to insert",key);
            return; 
        }
        else if(key<root->data){
            root=root->right;
        }
        else if(key>root->data){
            root=root->left;
        }
    }
    struct node*new=malloc(sizeof(struct node));
    if(key<ptr->data){
        ptr->left=new;
        
    }
    else{
       ptr->right=new;
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
     insert(p,7);
     printf("%d", p->right->right);
        return 0;
}