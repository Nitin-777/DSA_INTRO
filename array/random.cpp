#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
void swap(int a,int b){
    int temp=a;
     a=b;
    b=temp;
}
int main()
{
    int arr[10]={1,5,6,11,3,0,2,5,8,33};
    for(int i=0;i<10;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        else{
            i++;
        }

    }
    for(int j=0;j<10;j++){
        cout<<arr[j]<<" ";
    }
   
    return 0;
}
