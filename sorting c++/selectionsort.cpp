#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
     a=b;
     b=temp;

}
void selectionsort(int arr[],int size){
      for(int i=0; i<(size-1); i++){
        int minIndex=i;
        for(int j=1+1; j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
         swap(arr[i],arr[minIndex]);
      }
    
}
int main()
{
    int arr[5] = {10, 3, 5, 9, 2};
    selectionsort(arr, 5);
    
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
