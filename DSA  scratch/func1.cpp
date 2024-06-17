#include<iostream>
using namespace std;

int power(int a, int b){
    int result=1;
    for(int i=1; i<=b; i++){
        result=result*a;
    }
    return result;
};
int main()
{
    int c,d;
    cin>>c>>d;
    int n=power(c,d);
    cout<<n;
    
    return 0;
}
