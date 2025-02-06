#include <bits/stdc++.h>
using namespace std;
int factorial(int n, int m){
    int fact=1;
    for(int i=n; i>=m; i--){
        fact=fact*i;

    }
    return fact;
}


int nCr (int n , int r){
    int ans1=factorial(n,-(r-n)+1);
    int ans2=factorial(r,1);
    int ans=ans1/ans2;
    return ans;
    



}

int main() {
    cout<<" "<<factorial(5,1)<<" ";
    cout<<" "<<nCr(5,3)<<" ";
    
    return 0;
}