// C++ program to implement iterative Binary Search
//#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x)
{
    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 40;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n, x);
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result+1;
    return 0;
}