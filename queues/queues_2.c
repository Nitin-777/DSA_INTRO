#include<stdio.h>
#include<stdlib.h>

struct queue{
   int size;
   int f;
   int r;
   int *arr;
};
  void enqueue(struct queue *ptr, int num){
    if(ptr->r==ptr->size-1){
        printf("queue is full\n");
    }
    else {
        ptr->r++;
        ptr->arr[ptr->r]=num;
    }
  }
  int dequeue(struct queue *ptr){
    int a;
    if(ptr->f==ptr->r){
      printf("the queue is empty\n");

    }
    else{
      ptr->f++;
      a=ptr->arr[ptr->r];
      return a;

    }
  }
int main(){
    struct queue *q=malloc(sizeof(struct queue));
    q->size=4;
    q->f=-1;
    q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    enqueue(q,77);
    enqueue(q,31);
    dequeue(q);
    printf("%d\n");
    dequeue(q);
     printf("%d\n");
    dequeue(q);
    return 0;
}