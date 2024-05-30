#include<stdio.h>
#include<stdlib.h>

void printanarray(int*A, int n){
     for(int i=0; i<n; i++){
        printf("%d\n",A[i]);
     }
     printf("\n");
};
void selectionsort(int *A,int n){
   int indexofmin,temp;
   for (int i=0;i<n;i++) 
   {
      indexofmin=i;
      for(int j=i+1;j<n;j++)
      {
         if(A[j]<A[indexofmin])
         indexofmin=j;

      }
   temp=A[i];
   A[i]=A[indexofmin];
   A[indexofmin]=temp;
      }
}
int main(){
   int A[]={2,8,4,54,76,41};
   int n=6;
   printanarray(A,6);
   selectionsort(A,6);
   printanarray(A,6); 
}