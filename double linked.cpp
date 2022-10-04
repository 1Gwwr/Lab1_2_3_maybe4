#include <iostream>
using namespace std;

class Node {
    
    public:
    int value;
    Node* previous;
    Node* next;
};

void printforward(Node*head){
    Node* start=head;
    while(start != nullptr){
	
    cout<<start->value;
    start=start->next;
    
	}
}
void printbackward(Node*tail){
    Node* start=tail;
    while(start != nullptr){
	
    cout<<start->value;
    start=start->previous;
}
}


int main()
{
    Node* head;
    Node* tail;
   //first node  
   Node* node=new Node();
   node->value=5;
   node->next= nullptr;
   node->previous= nullptr;
   head=node;
   tail=node;
   //second node
   node = new Node();
   node->value=6;
   node->next= nullptr;
   node->previous=tail;
   tail->next=node;
   tail=node;
   //third node 
   
node = new Node();
   node->value=7;
   node->next= nullptr;
   node->previous=tail;
   tail->next=node;
   tail=node;
   //fourth node
   
   node = new Node();
   node->value=8;
   node->next=nullptr;
   node->previous=tail;
   tail->next=node;
   tail=node;
   cout<<"forward direction "<<endl;
   printforward(head);
   
   cout<<"\nbackward direction"<<endl;
   printbackward(tail);
  
}
