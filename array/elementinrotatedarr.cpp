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
 
 int Binarysearch(int arr[],int size,int start,int end,int key){
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
      int pivot=Pivot(arr,5);
    if(arr[pivot]<=key && key<=arr[size-1])
    {
         Binarysearch(arr,size,pivot,size-1,key);
    }
    else{
         Binarysearch(arr,size,0,pivot,key);
    }

 }


int main(){
    int key; int size;
    int arr[5]={9,10,3,4,5};
    cout<<checkelement(arr,5,9);
    return 0;
}
