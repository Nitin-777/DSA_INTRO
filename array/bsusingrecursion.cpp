#include<iostream>
using namespace std;
bool binarysearch(int *arr, int size,int s, int e, int k){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]>k){
        return binarysearch(arr,size,s,mid-1,k);
    }
    if(arr[mid]<k){
        return binarysearch(arr,size,mid+1,e,k);
    }
}


int main(){
    int arr[]={2,4,6,8,10};
    int s=0;
    int e=4;
    int k=6;
    int size=5;
    bool ans=binarysearch(arr,size,s,e,k);
    cout<<"ans is"<<" "<<ans<<endl;





    return 0;
}
