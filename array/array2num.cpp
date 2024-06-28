#include<iostream>
using namespace std;

int  Array2num(int arr[],int size){
    int num=0; int num2=0;
    for(int i=0; i<size; i+=2){
         num=arr[i]*10+arr[i+1];
          num2=num*10+num;
    }
    return num2;
}
int main()
{
    int size;
    cout<<"size";
    cin>>size;
    int arr[size];
    for(int i=0 ; i<size; i++){
    cin>>arr[i];
    }
    int ans=Array2num(arr,size);
    cout<<ans;

    return 0;
}
