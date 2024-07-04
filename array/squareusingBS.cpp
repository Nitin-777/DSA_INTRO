#include<iostream>
using namespace std;
int Squareroot(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<end){
        if((mid*mid)==n){
            return mid;
        }
    if((mid*mid)>n){
        end=mid-1;
    }
    else{
         ans=mid;
        start=mid+1;
    }
    mid=start+(end-mid)/2;
    }
    return start;
}
double precision(int n,int digits,int tempsol){
    double factorial=1;
    double sol=tempsol;
    for(int i=0;i<digits;i++){
         factorial=factorial/10;
        for(int j=sol; (j*j)<n; j=j+factorial){
                    int sol=j;
        }
    }
    return sol;
}
int main()
{
    int tempsol=Squareroot(81);
    cout<<tempsol;

    
     return 0; 
}
