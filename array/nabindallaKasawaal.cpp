#include<iostream>
using namespace std;
int Getcf(int arr[],int size,int index1,int index2){
    int num=arr[index1];
    int rounds=index2-index1;
    for(int i=1;i<rounds;i++){
            for(int j=1; j<=i;j++){
            arr[num]=arr[num]+arr[num+1];
            }
    }
}
void printarray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i];
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
    int index1;
    int index2;
    cin>>index1;
    cin>>index2;
    Getcf(arr,size,index1,index2);
    printarray(arr,size);

    return 0;
}
