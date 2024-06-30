#include<iostream>
using namespace std;

int Pivot(int arr[],int size){
   int start=0;
   int end=size-1;
   int mid=start+(end-start)/2;
   while(start<end){
      if(arr[mid]>=arr[0]){
        start=mid+1;
      }
        else{
            end=mid;
        }
      mid=start+(end-start)/2;

   }
   return start;
}
 
 int Binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
         if(arr[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
 }
 int checkelement(int arr[],int size,int key){
    int start=0;
    int end=size-1;
      int pivot=Pivot(arr,5);
    if(arr[pivot]<=key && key<=arr[size-1])
    {
            start=pivot;
            Binarysearch(arr,size,key);
    }
    else{
        Binarysearch(arr,size,key);
    }

 }


int main(){
    int key; int size;
    int arr[5]={9,10,3,4,5};
    cout<<checkelement(arr,5,4);
    return 0;
}
