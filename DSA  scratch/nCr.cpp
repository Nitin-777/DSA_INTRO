#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
     for(int i=1; i<=n;i++){
        fact=fact*i;
     } 
     return fact;
}
int nCr(int m,int d){
     int numerator=factorial(m);
    int denominator=factorial(d)*factorial(m-d);
     return numerator/denominator;
    
}

int main()
{
    int n,r;
    cin>>n>>r;
   // int answer=factorial(5);
    //cout<<"Answer is : "<<answer;
    cout<<"Answer is : "<<nCr(n,r); 
     return 0;
}
