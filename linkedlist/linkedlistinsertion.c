#include <stdio.h>
#include <stdlib.h>

    struct node{
        int data;
        struct node* link;
    };
    void linkedlisttraversal(struct node *potr)
    {
        while(potr !=NULL){
            printf("%d", potr->data);
            potr=potr->link;
            return 0;

        }}
        struct node insertatbegi(struct node *head, int data)
        { 
            struct node *naya=malloc(sizeof(struct node));
             naya-> data = data; 
             naya -> link= head;
            return *head;

        }
    
    int main(){
   struct node *head= malloc(sizeof(struct node));
    head->data =40;
    head->link=NULL;

    struct node *ptr= malloc(sizeof(struct node));
    ptr->data=77;
    ptr->link=NULL;
    head ->link =ptr;

    struct node *insert=malloc(sizeof(struct node));
    insert->data=99;
    insert->link=NULL;

    linkedlisttraversal(head);
    *head= insertatbegi(head,101);
    linkedlisttraversal(head);

              return 0;
    }