#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void bubblesort(int arr[],int size){
    for(int i=1; i<size;i++){
        for(int j=0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
      
        }
    }

int main()
{
    int arr[5]={10,20,15,2,11};
    bubblesort(arr,5);
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
