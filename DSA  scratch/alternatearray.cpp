#include <iostream>
using namespace std;

void SwapAlt(int arr[], int n){
    for(int i = 0; i < n-1; i += 2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

void Print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;  
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];  
    }
    
    SwapAlt(arr, size);
    Print(arr, size);
    
    return 0;
}
