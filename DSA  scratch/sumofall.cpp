#include<iostream>
using namespace std;
void sumofALL(int num){
    int i=0;
    int j=1;
    while(j!=(num+1)){
            cout<<i+j<<" ";
            i++;
            j++;
    }


}
int main()
{
    int num;
    cin>>num;
    sumofALL(num);
    return 0;
}
