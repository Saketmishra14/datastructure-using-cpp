#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        
    }
}
int main(){
    int arr[]={3,2,1,4,5,44,23,34,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"This is unsorted array -:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    Selectionsort(arr,size);
}