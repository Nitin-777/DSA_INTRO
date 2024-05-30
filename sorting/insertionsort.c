#include<stdio.h>
#include<stdlib.h>

void printanarray(int*A, int n){
     for(int i=0; i<n; i++){
        printf("%d\n",A[i]);
     }
     printf("\n");
};
void insertionsort(int *A,int n){ 
    int key,j;
    for(int i=1;i<=n;i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}
    
int main()
{
int A[]={3,47,21,32,45};
int n=6;
printanarray(A, 5);
insertionsort(A, 5);
printanarray(A, 5);
return 0;
}