#include<iostream>
using namespace std;

void Linearsearch(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<"The number is detected"<<endl;
            cout<<"THE number is in : "<<i;
        }
    }
    return;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    Linearsearch(arr,size,num);
    return 0;
}
