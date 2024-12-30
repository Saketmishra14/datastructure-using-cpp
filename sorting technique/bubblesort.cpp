#include<iostream>
#include<vector>
using namespace std;

void Bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
}

int main(){
    int arr[]={2,1,4,5,6,43,23,14};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"This is unsorted array-:";
    for (int i = 0; i <size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    Bubblesort(arr,size);
    cout<<"This is sorted array-:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    
}