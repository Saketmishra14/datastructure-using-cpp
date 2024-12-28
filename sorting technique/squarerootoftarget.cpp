#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double Squareroot(int x, int precision){
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
    //search in left
    e=mid-1;
   }

}

    //Fractional part
    double root=ans;
    double decimal=0.1;
    for (int i = 0; i < precision; i++)
    {
       while (root*root<=x){
        root+=decimal;
        
       }
       root -= decimal; // Step back when overshooting
        decimal /= 10;  // Decrease the precision
       
    }
    
    return root;

}


int main(){
    int X;
    cout<<"Enter Number -:";
    cin>>X;
    int precision;
    cout<<"Enter The Number of floating digit in precision -:";
    cin>>precision;

   double result= Squareroot(X,precision);
    cout<<"Square root of number "<<X<<" is -:"<<result<<endl;

    return 0;

}