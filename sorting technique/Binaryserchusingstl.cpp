#include<iostream>
#include<algorithm> //for binary search 
#include<vector>
using namespace std;

int main(){
    vector<int>arr={2,3,4,5,7,8,9,10 };
    int target;
    cout<<"give the target:";
    cin>>target;
     if(binary_search(arr.begin(),arr.end(),target) ){
        cout<<"Element found";
     }
     else{
        cout<<"Not found.";
     }

     return 0;

}