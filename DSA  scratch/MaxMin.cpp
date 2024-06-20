#include<iostream>
#include<limits.h>
using namespace std;

int isMAX(int arr[], int num){
    int max= INT_MIN;
    for(int i=0;i<num;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    return max;
}
int isMIN(int arr[], int num){
    int min= INT_MAX;
    for(int i=0; i<num;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    int max = isMAX(arr,n);
    int min=isMIN(arr,n);
    cout<<"Maximum number is : "<<max<<endl;
    cout<<"Minimum numberis : "<<min;
    return 0;
}
