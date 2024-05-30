#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }


}
int isempty(struct stack *ptr){
    if(ptr->top==-1){
      return 1;
    }
    else{
        return 0;
    }

}
 void push(struct stack *ptr, int num){
    if(isfull(ptr)){
        printf("stack overflow\n");
        
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=num;
    }
 }
    int pop(struct stack *ptr){
    if(ptr->top==-1){
        printf("Stack under flow");
        return 0;

    }
    else{
        int num=ptr->arr[ptr->top];
        ptr->top--;
        return num;
    }
  }
 int main(){
    struct stack *no=malloc((sizeof(struct stack)));
    no->size=6;
    no->top=-1;
    no->arr=(int*)malloc(no->size* sizeof(int));
    push(no,77);
    push(no,40);
    push(no,22);
    push(no,34);
    push(no,91);
    push(no,21);
    push(no,77);
    //printf("%d\n", isfull(no));
     printf("THE POPPED ELEMENT IS %d\n", pop(no));
     printf("THE POPPED ELEMENT IS %d\n", pop(no));
     printf("THE POPPED ELEMENT IS %d\n", pop(no));
     printf("THE POPPED ELEMENT IS %d\n", pop(no));
     printf("THE POPPED ELEMENT IS %d\n", pop(no));
     printf("THE POPPED ELEMENT IS %d\n", pop(no));
      printf("THE POPPED ELEMENT IS %d\n", pop(no));


    return 0;
}