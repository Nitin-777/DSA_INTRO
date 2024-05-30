#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int*arr;
};
  int itsfull(struct queue *ptr){
    if(ptr->r==ptr->size-1){
        return 1;
    }  
        return 0;
    }
  
  void enqueue(struct queue *ptr, int num){
    if(itsfull(ptr)){
        printf("overflow");
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]=num;

    }
  }

    int main(){
    struct queue *first=malloc(sizeof(struct queue));
    first->size=5;
    first->f=-1;
    first->r=-1;
    int *arr=(int*)malloc(first->size*sizeof(int));
    enqueue(first,44);
    enqueue(first,44);
    enqueue(first,44);
    enqueue(first,44);
    enqueue(first,44);
    enqueue(first,44);
    printf("queue");
         
         return 0;
 

}