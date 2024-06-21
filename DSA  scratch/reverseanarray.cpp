#include<iostream>
#include<algorithm>
using namespace std;
int  ReverseArray(int arr[], int n){
    cout<<"After reversing the array"<<endl;
    int start=0;
    int end=n-1;
    while(start<=end){
       int temp;
       temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;
       start++;
       end--; 
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The elements are :"<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
    ReverseArray(arr,size);
    return 0;
}
