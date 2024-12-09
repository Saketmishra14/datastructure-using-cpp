#include<iostream>
#include<stack>
using namespace std;

stack<int> copystack(stack<int> &input){
  stack<int> temp;
  while (not input.empty())
  {
    //do the process till the time input stack doesn't become empty
    int curr=input.top();   //[] curr=
    input.pop();
    temp.push(curr);    //[2,33,4]
  }
  stack<int> result;
  int curr=temp.top();
  temp.pop();
  result.push(curr);
};
int main(){
  stack<int> st1;
   
}