#include<iostream>
using namespace std;
char maxOccurence(string s){
    int arr[26]={0};
    for(int i=0;i<=s.length();i++){
        int val=0;
        char ch=s[i];
        val=ch-'a';
        arr[val]++;
}
 int ans=0;int maxi=-1;
 for(int i=0;i<26;i++){
    if(maxi<arr[i]){
        ans=i;
        maxi=arr[i];
    }

}
char ans1='a'+ans;
return ans1;
}
int main()
{
    string s;
    cin>>s;
    cout<<maxOccurence(s);
    return 0;
}
