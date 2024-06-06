#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int count=1;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<count<<" ";
            count=count+1;
            col++;
        }
         cout<<endl;
         row=row+1;
    }
       
}