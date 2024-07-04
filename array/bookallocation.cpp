#include<iostream>
using namespace std;
bool ispossible(int arr[],int size,int m,int mid){
    int student=1;
    int sumofpages=0;
    for(int i=0;i<size;i++){
    if(sumofpages+arr[i]<=mid){
        sumofpages+=arr[i];
    }
    else{
        student++;
        if(arr[i]>mid || student>m){
            return false;
        }
        sumofpages=arr[i];
    }
    }
return true;
}
int Maxnum(int arr[],int size, int m){
    int start=0;
    int ans=0;
    int sum =0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(ispossible(arr,size,m,mid)){
            ans=mid;
            end=mid-1;

        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int size=4;
    int arr[size]={12,34,67,90};
   cout<<Maxnum(arr,size,2);
    return 0;
}
