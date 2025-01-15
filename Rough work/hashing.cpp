#include <bits/stdc++.h>
using namespace std;

// This is a ordered map

int main() {
    int arr[27]={0};
    int x=0;
    string s="abcdsyyyaaasgh";
    for(int i=0; i<s.size(); i++){
        x=s[i]-'a';
        arr[x]+=1;
    }
    int k, m;
    cout<<"Enter number of queries"<<endl;  //hashing can be done for integer value upto 10^6 in main function 
    cin>>k;                              //and upto 10^7 global declararion                                       
    char ch;
    for(int j=0; j<k; j++){
        cout<<"Enter the character"<<endl;
        cin>>ch;
        m=ch-'a';
        cout<<arr[m]<<endl;

    }
    return 0;
}