#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,1,0,1,1,1};
    int count=0;
    int maxi=0;
    for(int i=0; i<6; i++){
        if(arr[i]==1){
             count++;
             if(count>maxi){
                maxi=count;
             }
        }
        else{
            count=0;
        }
    }
    cout<<maxi;
    return 0;
}
