#include<iostream>
using namespace std;
 bool issorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;

    }
    bool ans=issorted(arr+1,size-1);
    return ans;
 }



int main(){
    int arr[5]={4 ,6,8,6,33};
      cout<<issorted(arr,5);
}