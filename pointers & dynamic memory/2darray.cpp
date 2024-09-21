#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int **ptr= new int*[n];
    for(int i=0; i<n; i++){
        ptr[i]= new int[n];
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>ptr[i][j];
        }
     }
        for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
        }
     
    return 0;
}
