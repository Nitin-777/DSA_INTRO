#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l;
    while(n!=l){
        int x= n/100;
        n=n%100;
        cout<<"No. of 100 rupees notes : "<<x<<endl;
       
        int y=n/50;
        n=n%50;
        cout<<"No. of 50 rupees notes : "<<y<<endl;
        
        int z= n/10;
        n=n%10;
        
        cout<<"No. of 10 rupees notes : "<<z<<endl;
         l=n;
        cout<<"No. of 1 rupee : "<<l<<endl;
    }
    return 0;
}
