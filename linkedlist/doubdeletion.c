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
    struct node * delfirstnode(struct node *head){
        struct node *temp=head;
        head=head->next;
        free(temp);
        temp=NULL;
        head->prev=NULL;
        return head;

    }
    struct node *dellastnode(struct node *head){
        struct node*ptr=head;
        struct node *temp2;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        temp2=ptr->prev;
        temp2->prev=NULL;
        free(ptr);
        ptr=NULL;
        return head;
 }
       struct node *delatindex(struct node *head, int index){
        struct node *ptr=head;
        struct node  *ptr2=NULL;
        int i=0;
        ptr=head;
        while(i==index){
            ptr=ptr->next;
           i++;
        }
        ptr2=ptr->prev;
        ptr2->next=ptr->next;
        free(ptr);
        ptr=NULL;
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

   delatindex(head,1);
   doublylinkedlisttraversal(head);

    return 0;
      }


