#include<iostream>
using namespace std;

int sumnikalrhahoon(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int second=sumnikalrhahoon(arr+1,size-1);
    int sum=arr[0]+second;
    return sum;
}

int main(){
    int arr[4]={2,3,4,4};
    cout<<sumnikalrhahoon(arr,4);
    return 0;
}