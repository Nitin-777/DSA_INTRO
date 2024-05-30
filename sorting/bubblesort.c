#include<stdio.h>
#include<stdlib.h>
 void printarray(int *ptr, int n){
    for(int i=0;i<=n-1;i++){
        printf("%d\n",ptr[i]);

    }
 }
    void bubblesort(int *ptr,int n){
        for(int i=0;i<n-1;i++){

            for(int j=0;j<n-1-i;j++){
                if(ptr[j]>ptr[j+1]){
                    int temp=ptr[j];
                    ptr[j]=ptr[j+1];
                    ptr[j+1]=temp;
                }
            }
        }
    }

  

int main(){
    int A[]={90,21,13,9,67,42};
    int n=6;
    printarray(A, 6);
    printf("\n");
    bubblesort(A,6);
    printf("\n");
    printarray(A,6);
    return 0;
}