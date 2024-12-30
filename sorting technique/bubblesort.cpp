#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={2,1,4,5,6,43,23,14};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"This is unsorted array-:";
    for (int i = 0; i <size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
    
}