#include<iostream>
using namespace std;
class stack{
  private:
  int capacity;
  int* arr;
  int top;
            // Making Constructor to initialize the stack with a given capacity
  public: 
     stack(int c){
      this->capacity=c;
      arr=new int(c);
      this->top=-1;

     }
           // Push function to add an element to the stack
     void push(int data){
      if (this->top==this->capacity)
      {
        
        cout<<"overflow"<<endl;

      }
        this->top++;
        this->arr[this->top]=data;
      
     }

     //PoP function to remove an element to the stack
     int pop(){
      if (this->top==-1)
      {
        cout<<"underflow"<<endl;
        return INT_MIN;
      }
      this->top--;
     }

     // Function to return the top element of the stack
     int gettop(){
      if (this->top==-1)
      {
        cout<<"underflow"<<endl;
        return INT_MIN;
      }
      return this->arr[this->top];
      
     }

     //function to check if the stack is empty
     bool isempty(){
      return this->top==-1;
     }

     //function to check the size of stack
     int size(){
      return top+1;
     }

     //function to check if the stack is empty
     bool isfull(){
      return this->top==this->capacity;
     }

     //Function to printStack form bottom to top
     void printstack() {
        cout << "Stack elements:";
        for (int i = 0; i < top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
     
};
int main(){
  stack s1(3);
  s1.push(67);
  // cout<<s1.gettop()<<endl;
   s1.push(34);
  //  cout<<s1.gettop()<<endl;
    s1.push(23);
    //  cout<<s1.gettop()<<endl;
     s1.push(67);
  // cout<<s1.gettop()<<endl;
  s1.push(76);
  s1.push(45);
  // cout<<s1.gettop()<<endl;
  s1.printstack();
}