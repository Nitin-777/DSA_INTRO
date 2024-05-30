#include<stdio.h>
#include<stdlib.h>

void delete(int B[],int element,int size, int index)
{
    for(int i=index; i<size ; i++){
        B[i]=B[i+1];
        size-1;

    }
   

}
  
  int main(){
    int A[50]={4,8,9,7,10,14};
    int size =6;
      for(int i=0; i<size; i++){
        printf("%d\n ",A[i]);
    }
  
       printf("\n"); 
       delete(A,9,6,3);
      for(int i=0; i<size; i++){
        printf("%d\n ",A[i]);
    }



  return 0;
  }