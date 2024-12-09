#include<iostream>
using namespace std;
void decreasing(int n){
  if(n==1) {
    cout<<n<<endl;
    return;
  }
  cout<<n<<endl;
  decreasing(n-1);
    
}
int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  decreasing(n);
  return 0;
}