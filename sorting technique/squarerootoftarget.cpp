#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Squareroot(int x){
    int s=0;
    int e=x;
   
    int ans=-1;
    while (s<=e){
         int mid=s+(e-s)/2;
    
    if (mid*mid==x){
        return mid; 
    } 

    else if(mid*mid<x){
        ans=mid;
        //search in right
        s=mid+1;
    }
   else{
    e=mid-1;
   }
    }
    return ans;

}


int main(){
    int X;
    cout<<"Enter Number -:";
    cin>>X;
   int result= Squareroot(X);
    cout<<"Square root of number "<<X<<" is -:"<<result<<endl;

    return 0;

}