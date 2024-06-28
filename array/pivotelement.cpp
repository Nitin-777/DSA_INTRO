#include<iostream>
using namespace std;
int Pivotelement(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid] >= arr[0]){
            start=mid+1;
        }
        else {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;
}
int main()
{
      int arr[6]={4,5,6,1,2,3};
      cout<<Pivotelement(arr,6);    
    return 0;
}
