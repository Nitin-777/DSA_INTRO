#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter your statement"<<endl;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str[i]='@';
        }
    }
    cout<<str;
    return 0;
}
