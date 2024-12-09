#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            } 
        }
    }
}
void printarray(int arr[], int n){
    cout<<"After bubble sort: ";
    for (int i = 0; i <n; i++)
    {
       cout<<arr[i]<<"  ";

    }
    cout<<endl;
    

}
int main(){
    int arr[]={5,1,4,2,8};
     cout<<"This is normal array: ";
    for (int i = 0; i < 5; i++)
    {
     cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printarray(arr,n);

}