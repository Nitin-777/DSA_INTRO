#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=0;

    while(start<=end)
    {
             if(arr[mid]==key){
                ans=mid;
                end=mid-1;
                }
                else if (arr[mid]<key){
                    start=mid+1;

                }
                else if (arr[mid]>key){
                 end=mid-1;
                }
                mid=start+(end-start)/2;
    }
    return ans;
}

int LastOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=0;

    while(start<=end)
    {
             if(arr[mid]==key){
                ans=mid;
                start=mid+1;
                }
                else if (arr[mid]<key){
                    start=mid+1;

                }
                else if (arr[mid]>key){
                 end=mid-1;
                }
                mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[10]={0,1,1,2,2,3,3,4,4,4};
    int answer=firstOccurence(arr,10,2);
    int ans2=LastOccurence(arr,10,3);
    cout<<"The first index of given number is : "<<answer<<endl;
    cout<<"The Last index of given number is : "<<ans2;
    return 0;
}
