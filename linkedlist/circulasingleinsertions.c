#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};
void circulartraversal(struct node*head)
{
    struct node *ptr=head;
    printf("%d\n", ptr->data);
    ptr=ptr->next;

    while(ptr!=head){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node *atbeg(struct node *head, int num){
struct node *temp=malloc(sizeof(struct node));

    struct node *ptr=head;
    temp->data=num;
    temp->next=NULL;
    ptr=ptr->next;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    head=temp;
    return head;
   }
   struct node*atend(struct node *head,int num2 ){
    struct node *ptr=malloc(sizeof(struct node));
    struct node *p=head;
    ptr->data=num2;
    ptr->next=NULL;
    p=p->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;

   }
int main(){
struct node* head=malloc(sizeof(struct node));
head->data=82;
head->next=NULL;

struct node *ltr=malloc(sizeof(struct node));
ltr->data=21;
ltr->next=NULL;
head->next=ltr;

struct node * joy=malloc(sizeof(struct node));
joy->data=67;
joy->next=head;
ltr->next=joy;

head=atend(head,88);
circulartraversal(head);
return 0;
}
