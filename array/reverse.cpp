#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
     a=b;
    b=temp;
}
int main()
{

    int size;
    cout<<"size";
    cin>>size;
    int m;
    cout<<"index";
    cin>>m;
    int arr[size]={1,2,3,4,5};
    int start=m;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
