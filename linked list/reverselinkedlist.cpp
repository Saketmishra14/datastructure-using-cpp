#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
    
    Node(int new_data){
      data=new_data;
      next=nullptr;
    }
};

Node* reverselist(Node* head){
  //Initialize three pointers
  Node* curr=head,*prev=nullptr,*next;
  while(curr!=nullptr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  return prev;
}

void printlist(Node* node){
  while (node!=nullptr)
  {
    cout<<"  "<<node->data;
    node=node->next;
  }
  

}
int main(){

  Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    cout<<"given linked list:";
    printlist(head);

    head=reverselist(head);

    cout<<"\nreverse linked list:";
    printlist(head);
     

}