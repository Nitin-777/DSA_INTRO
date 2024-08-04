#include<iostream>
using namespace std;
char Tolowercase(char ch){

    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp= ch-'A'+'a';
    }
}
char swap(char &a,char &b){
    char temp=a;
    a=b;
    b=temp;
}
char reverse(char arr[]){
    int start=0;
     int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    int end=i-1;
    while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
    cout<<arr;
}
bool checkpalindrome(char arr[]){
    int start=0;
    int test=0;
    int i=0;
    while(arr[i]!='\0'){
        i++;
        Tolowercase(arr[i]);
    }
    int end=i-1;
    if(arr[start]!=arr[end]){
        cout<<"It is not a palindrom";
        return 0;
    }
    else {
        cout<<"It is a palindrome"<<endl;
    }
    

    }

int main()
{
    char arr[100];
    cout<<"Enter name"<<endl;
    cin>>arr;
    int i=0;
    while(arr[i]!='\0'){
        i++;
    }
    cout<<"Lenth of string is "<<i<<endl;
    reverse(arr);
    cout<<endl;
    checkpalindrome(arr);

    return 0;
}
