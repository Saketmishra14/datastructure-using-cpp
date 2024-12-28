#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int LastOccu(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int ans=-1;

    while(start<=end){
       int mid=start+(end-start)/2;

       if(arr[mid]==target){
        // Index Store
        ans=mid;
        // search in right
        start=mid+1;
       }

       else if(arr[mid]>target){
        //Search in Left
       
         end=mid-1;
       }
       else if(arr[mid]<target){
        //Search in right
         start=mid+1;
       
       }

    }
    return ans;

}
int main(){

    vector<int> arr{1,3,4,4,4,4,4,4,4,5,6,7};
    int target=3;
    int Result=LastOccu(arr,target);
    
    if(Result==-1){
        cout<<"Element is not found.";

    }
    else{
        cout<<"Last Occurence Element is found at index -:"<<Result+1;
    }

}