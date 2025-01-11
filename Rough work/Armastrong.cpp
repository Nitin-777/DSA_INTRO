#include <bits/stdc++.h>
using namespace std;
int powi(int x){return x*x*x;}

int main() {
    int arm;
    cin >> arm;
    int num = arm;
    int x = 0;
    int ans = 0;
    while(arm){
        x = arm%10;
        ans += powi(x);
        arm /= 10;
    }
    if(num == ans)cout<<"Armstrong!";
    else cout<<"Not Armstrong!";
    return 0;
}