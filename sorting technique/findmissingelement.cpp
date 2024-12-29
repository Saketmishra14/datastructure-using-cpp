#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Missingnumber(vector<int>arr){
    int s=0;
    int size=arr.size();
    int e=arr.size()-1;

    while(s<=e){
       int mid=s+(e-s)/2;

       if(arr[mid]==mid+1){
        //search in right 
        s=mid+1;

       }

       else{
        //search in left 
        e=mid-1;
       }
    }
    return s+1;
}
int main(){
    vector<int> arr{1,3,4,5,6,7,8};
    
    int result=Missingnumber(arr);
    cout<<"The missing number is :"<<result;

}