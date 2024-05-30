  #include<stdio.h>
  #include<stdlib.h>

   struct node{
    struct node *prev;
    int data;
    struct node *next;
   };

   void doublylinkedlisttraversal(struct node *head)
   {
   while(head!=NULL){
    printf("%d\n", head->data);
    head=head->next;
   }
   }

     struct node* doublyinsertatbeg(struct node *head, int num){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->prev=NULL;
    ptr-> data=num;
    ptr->next=NULL;
    ptr->next=head;
    head=ptr;
    return head; 
     }

     struct node* doublyinsertatend(struct node *head,int no){
        struct node *tp;
        struct node *ptr=malloc(sizeof(struct node));
        ptr->prev=NULL;
        ptr->data=no;
        ptr->next=NULL;
        tp=head;
        while(tp!=NULL){
            tp->next=tp;
        }
        tp->next=ptr;
        ptr->prev=tp;
        return head;
        
     }


      int main(){
    struct node *head=malloc(sizeof(struct node));
    head->prev=NULL;
    head->data=66;
    head->next=NULL;


    struct node *ptr=malloc(sizeof(struct node));
    ptr->prev=head;
    ptr->data=99;
    ptr->next=NULL;
    head->next=ptr;

    struct node *dol=malloc(sizeof(struct node));
    dol->prev=ptr;
    dol->data=23;
    dol->next=NULL;
    ptr->next=dol;

    head = doublyinsertatend(head,14);
    doublylinkedlisttraversal(head);

    return 0;
}
