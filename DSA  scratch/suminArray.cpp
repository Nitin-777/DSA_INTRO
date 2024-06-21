#include<iostream>
using namespace std;
int ADD(int arr[],int n){
    int first=0;
    for (int i=0; i<n;i++){
         first=first+arr[i];
    }
   return first;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
 int answer=ADD(arr,size);
 cout<<"ANSWER is : "<<answer;
 
    return 0;
}
