#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Create a stack of strings called cars
  stack<string> cars;

  // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");

  cout<<cars.empty()<<endl;
  cout << cars.top()<<endl;
  cars.push("Mazda");

  // Access the top element
  cout << cars.top()<<endl;

  if (cars.empty())
  {
    cout<<"stack is empty"<<endl;
  }
  else
  {
    cout<<"stack is not empty"<<endl;
  }
  
  
  return 0;
}
