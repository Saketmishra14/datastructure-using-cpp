#include<iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int x){
    if (high>=low){
        int mid=low +(high-low)/2;

        if(arr[mid]==x){
            return mid;
        }
          if (arr[mid] > x)
            return binarysearch(arr, low, mid - 1, x);


              return binarysearch(arr, mid + 1, high, x);
    }
  return -1;
    }
 


int main(){
     int arr[] = { 2, 3, 4, 10, 40 };
    int x= 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarysearch(arr, 0, n - 1, x);
    if (result == -1){
       cout << "Element is not present in array";

    }
    else cout << "Element is present at index " << result+1;
    return 0;
}