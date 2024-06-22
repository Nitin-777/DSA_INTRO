#include<iostream>
using namespace std;

void Swap(int arr[],int n){
    int start=0;
    int second=1;
    int temp=0;
    if(n%2==0){
    for (int i=0;i<n;i++){
            temp=arr[start];
            arr[start]=arr[second];
            arr[second]=temp;
            start=start+2;
            second=second+2;
         
        }}
        else{
            for(int i=0;i<=n-2;i+=2){
            temp=arr[start];
            arr[start]=arr[second];
            arr[second]=temp;
            start=start+2;
            second=second+2;
            
            }
            cout<<arr[n-1]<<endl;
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
    
       Swap(arr,size);
       for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
       }
    
     return 0;
}
