#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"enter the operation to be performed"<<endl;
    cin>>ch;
    switch(ch){
        case '+' :
        cout<<"Answer is : "<<a+b;
        break;

        case '-' :
        cout<<"Answer is : "<<a-b;
        break;

        case '*' :
        cout<<"Answer is : "<<a*b;
        break;

        case '%' :
        cout<<"Answer is : "<<a%b;
        break;

        default : 
        cout<<"INVALID OPERATOR";
    }
    return 0;
}
