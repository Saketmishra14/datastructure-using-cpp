#include<iostream>
using namespace std;

int linearsearch(int n,int target,int arr[]){
    for(int i=0;i<=n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}
 int main(){
    int arr[]={65,43,44,22,23,56,7778,89,78,88};
    int target=56;
    int n=sizeof(arr)/sizeof(arr[0]);
   int result= linearsearch(n,target,arr);
   if(result!=-1){
    cout<<"The target location is :"<<result+1;
   }
   else{
    cout<<"element not found in array";
   }

 }