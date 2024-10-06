#include<iostream>
using namespace std;
bool linearsearch(int *arr, int size, int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    bool ans=linearsearch(arr+1,size-1,k);
    return ans;
} 





int main(){
   int arr[]={3,6,1,8,2};
   int size=5;
   int k=12;
   bool ans=linearsearch(arr,size,k);
   cout<<"your ans is"<<" "<<ans<<endl;
    return 0;
}