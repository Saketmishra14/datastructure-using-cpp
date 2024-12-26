#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int x){
    int start=0;
    int end=size-1;
    while (start<=end){

        //Mid formula to prevent overflow.
        int mid=start+(end-start)/2;
        if (arr[mid]==x){
            return mid;
        }
        else if (arr[mid]<x){
            //search in right
            
            start=mid+1;
        }
        else{
            //search in left
            end=mid-1;
            
        }
        

    }
    return -1;
   


}
int main(){
    int arr[]={2,6,7,8,9,10,34,56,78,99};
    int x;
    cout<<"Give the target value:";
    cin>>x;
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=binarysearch(arr,size,x);
    if(result==-1){
        cout<<"Target is not found.";
    }
    else{
        cout<<"Target is found at index: "<<result+1;
    }

}