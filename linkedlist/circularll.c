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

circulartraversal(head);
return 0;
}



