#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    int num=0;
    for(int i=0;i<size-2;i++){
        if(arr[i]>arr[i+1]){
            num=num+(arr[i]-arr[i+1]);
        }
    }
    cout<<num;
    return 0;
   
}
