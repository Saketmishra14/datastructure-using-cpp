#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
     Node *left,*right;
     Node(int key){
        data=key;
        left=nullptr;
        right=nullptr;
     }

};

int main(){
    Node* firstnode=new Node(5);
    Node* secondnode=new Node(3);
    Node* thirdnode=new Node(6);
    Node* fournode=new Node(1);
    Node* fifthnode=new Node(2);
    firstnode->left=secondnode;
     firstnode->right = thirdnode;
    secondnode->left = fournode;
  
}