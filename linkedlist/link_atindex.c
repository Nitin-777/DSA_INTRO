#include <stdio.h>
#include <stdlib.h>

    struct node{
        int data;
        struct node* link;
    };
       void linkedlisttraversal(struct node *ptr)
       {
        while(ptr!=NULL){
            printf("%d",ptr->data);
            ptr=ptr->link;
        }
       }
       struct node *insertatindex(struct node *head,int data, int index){
        struct node *ptr=malloc(sizeof(struct node));
        struct node *p=head;
        int i=0;
        while(i!=index-1){
            p=p->link;
            i++;
        }
        ptr->link=p->link;
        ptr->data=data;
        p->link=ptr;
        return head;

       }
    int main(){
    struct node *head= malloc(sizeof(struct node));
    head->data = 40;
    head->link = NULL;
     
    struct node *newnode= malloc(sizeof(struct node));
    newnode->data= 70;
    newnode-> link= NULL; 
    head->link= newnode;
    
     struct node *new2= malloc(sizeof(struct node));
     new2-> data= 75;
     new2-> link= NULL;
     newnode->link= new2;

     linkedlisttraversal(head);
     insertatindex(head,21,2);
     return 0;


}
