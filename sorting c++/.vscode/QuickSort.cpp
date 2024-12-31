#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int func(int *arr, int s, int e){
    int pivot=arr[s];
    int i=s;
    int j=e;
    while(i<j){
        while(arr[i]<=pivot && i<=e-1){
            i++;
        }
        while(arr[j]>pivot && j>=s+1){
        j--;
        }
    
    if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[s],arr[j]);
    return j;
}


void quickSort(int *arr, int s, int e){
    if(s<e){
        int pivot=func(arr,s,e);
        quickSort(arr,s,pivot-1);
        quickSort(arr,pivot+1,e);
    }
}

int main() {
    cout<<"HI";
        /* int arr[5]={4,6,2,1,0};
         int s=0;
         int e=4;
         cout<<"HI";
         for(int j=0; i<5; i++){
            cout<<arr[j]<<" ";
         }
         quickSort(arr,s,e);
         for(int i=0; i<5; i++){
            cout<<arr[i]<<" ";
         }*/
    return 0;
}