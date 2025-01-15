#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6]={2,5,7,3,2,5};
    map<int,int> mpp;
    for(int i=0; i<6; i++){
         mpp[arr[i]]++;
    }
    int k;
    cout<<"Enter number of queries"<<endl;                //ordered map will store the data in sorted manner.
    cin>>k;                                               //unordered map will store data in unsorted manner.
    while(k--){
        cout<<"Enter number"<<endl;
        int m;
        cin>>m;
        cout<<mpp[m]<<endl;
    }

    return 0;
}