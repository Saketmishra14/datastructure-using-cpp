#include<iostream>
using namespace std;
int factorial(int n){
  if(n==1 || n==0) return 1;
  return n*factorial(n-1);
}
int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  factorial(n);
  cout<<"facatorial of "<<n<<" is = "<<factorial(n);
}