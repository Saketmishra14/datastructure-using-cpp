#include<iostream>
using namespace std;
int nsum(int n){
  if(n==0) return 0;
  int sum=n+ nsum(n-1);
   return sum;
    
}
int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  cout<<nsum(n);
}