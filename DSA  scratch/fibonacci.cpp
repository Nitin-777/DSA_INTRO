#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=0;
    int b=1;
    cout<<"enter num : "<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nextnum=a+b;
        cout<<nextnum<<" ";
        a=b;
        b=nextnum;
       

    }
    return 0;
}
