#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,5,6,7};
    int count=0;
    bool yes=true;
    for(int i=0;i<6;i++){
        if(arr[i]%2==1){
            count++;
            if(count>=3){
                cout<<"3 consecutive odd numbers";
                yes=false;
                break;
            }
        }
        else{
             count=0;
        }
    }
   if(yes==true){
    cout<<"no consecutive odd number";
   }
     return 0;
}
