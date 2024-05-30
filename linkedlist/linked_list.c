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
     return 0;


}
