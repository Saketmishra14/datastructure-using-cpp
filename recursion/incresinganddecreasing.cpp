#include<iostream>
using namespace std;
void increasing(int n){
  if(n==0) return;
  cout<<n<<endl;
   increasing(n-1);
   cout<<n<<endl;
    
}
int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int s=1;
  increasing(n);
  return 0;
}