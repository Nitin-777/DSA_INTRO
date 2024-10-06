#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector<vector<int>>arr={{1,2,3,4,},{2,4,56,7},{2,5,8,9},{8,4,6,1}};
     vector<int> ans;
     int row=arr.size();
     int column=arr[0].size();
     int total=row*column;
     int count=0;
     int startingcoloumn=0;
     int endingcoloumn=row;
     int startingrow=0;
     int endingrow=row;
     while(count<total){
        int row=matrix.size();
        int coloumn=matrix[0].size();
        int total=row*coloumn;
        int s=0;
        int end=total-1;
        int mid=s+(end-s)/2;
        while(s<end){
            if(mid==target){
                return true; 
                }
              if(mid>target){
                end=mid-1;
              }
              else{
                s=mid+1;
              }
              mid=s+(end-s)/2;
            
        }
        return false;
        
    }
};