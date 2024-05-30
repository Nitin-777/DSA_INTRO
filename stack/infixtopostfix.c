#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int stacktop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
  void push(struct stack *ptr, int val){
    if(ptr->top==ptr->size-1){
        printf("stack is full\n");
    }
    else{
        ptr->top+1;
        ptr->arr[ptr->top]=val;
    }
  }
  int pop(struct stack *ptr){
    if(ptr->top==-1){
        printf("stack underflow");

    }
    else {
        int num=ptr->arr[ptr->top];
        ptr->top--;
        return num;
    }
  }

  int isoperator(char ch){
   if(ch=='+'|| ch=='-'|| ch=='*'|| ch== '/' ){
    return 1;
 }
   else{
    return 0;
   }}
int precedence(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}
int  isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else {
        return 0;
    }
}

   
  char *infixtopostfix(char *infix){
    struct stack *ptr=malloc(sizeof(char));
    ptr->size=100;
    ptr->top=-1;
    ptr->arr=malloc(ptr->size*sizeof(char));
    char *postfix=(char*)malloc(strlen(infix)+1*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;

        }
        else{
            if(precedence(infix[i]>stacktop(ptr))){
                push(ptr,infix[i]);
                i++;
            }
            else
            postfix[j]=pop(ptr);
            j++;

        }
  }
while(!isempty(ptr))
{
postfix[j]=pop(ptr);
    j++;

}
postfix[j]='\0';
return postfix;

  }

int main(){

    char *infix="a*b/g+c";
    infixtopostfix(infix); 

}
