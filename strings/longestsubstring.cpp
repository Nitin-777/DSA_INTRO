#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
bool ispalindrome(vector<char>s1){
    int j=s1.size()-1;
        for(int i=0; i<s1.size()/2; i++){
                if(s1[i]!=s1[j]){
                    return false;
                }
                else{
                    j--;
                }
        }
        return true;
    

}
int main()
{
    int maxi=-1;
    vector<char>str={};
    vector<char>x={};
    vector<char>ans={};
    for(int i=0;i<str.size()-2;i++){
        x.push_back(str[i]);
        for(int j=i+1; j<str.size()-1;j++){
            x.push_back(str[j]);
            if(ispalindrome(x)==1){
                if(maxi<x.size()){
                    maxi=x.size();
                    for(int n=0; n<x.size(); n++){
                        ans.push_back(x[n]);
                    }
                }
            }



        }
    }
    
    return 0;
}
