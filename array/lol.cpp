#include <iostream>
using namespace std;
int firstOccurence(int arr[],int n,int k){
    int high = 0 , low = n-1;
    int mid = high+(low-high)/2;
    int ans=0;
    while(high <= low){
        if(arr[mid] == k){
            ans=mid;
             low=mid-1;
        }
       else if (arr[mid]<k){
            high=mid+1;
            
        }
        else if(arr[mid]>k){
            low=mid-1;
        }
         int mid = high+(low - high)/2;
    }
    return ans;
}
int main() {
    int arr[] = {0,1,1,2,2,2,3};
    int ans=firstOccurence(arr,7,1);
    cout<<ans;
    return 0;
}