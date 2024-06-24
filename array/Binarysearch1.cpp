#include<iostream>
using namespace std;
int  binarysearch(int arr[],int key,int n){
    int start=0;
    int end=n-1;
    int mid =(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int answer=binarysearch(arr,30,size);
    cout<<"INDEX is :"<<answer;


    return 0;
}
