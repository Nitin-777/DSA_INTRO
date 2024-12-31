#include<bits/stdc++.h>
using namespace std;

#define pyes cout << "YES\n" ;
#define pno cout << "NO\n" ;
#define br cout << "\n" ;
#define ff first 
#define ss second
#define pb push_back
#define ppb pop_back
#define MOD 998244353
#define mod 1000000007
#define inf 9223372036854775807
#define all(x) (x).begin(),(x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve(){
    
}


int sum (int arr[] , int n){  
    if(n == 1) return arr[0];
    if(n==0) return -1;
    int sum1 = sum(arr + 1, n - 1);
    int sum2 = arr[0] + sum1;
    return sum2;
}

int main() 
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);
    // #endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

   int n;
   cin >> n;
   int arr[n];
   for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
   }
   cout<<sum(arr,n);
    return 0;
}