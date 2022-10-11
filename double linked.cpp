#include<iostream>
#include<cstdlib>
using namespace std;


	class node{
		
		public:
		int data;
		node* next;
		node* prev;
	};
	
	void printforward(node*head){
    node* temp=head;
    while(temp != NULL){
	
    cout<<temp->data;
    temp=temp->next;
    
	}
}
	
	void printbackward(node*tail){
    node* temp=tail;
    while(temp != NULL){
	
    cout<<temp->data;
    temp=temp->prev;
}
}


int main(){
	node* head;
	node* tail;
	node* n;
	
	//first node
	n= new node;
	n->data =5;
	n->prev =NULL;
	head =n;
	tail=n;
	
	//second node
	n = new node;
	n->data = 6;
	n->prev = tail;
	tail->next=n;
	tail = n;
	
	//third node
	n = new node;
	n->data =7;
	n->prev=tail;
	tail->next=n;
	tail=n;
	
	//fourth node
	n= new node;
	n->data =8;
	n->prev=tail;
	tail->next=n;
	tail=n;
	tail->next=NULL;
	
	
	cout<<"forward direction "<<endl;
   printforward(head);
	cout<<"\nbackward direction"<<endl;
   printbackward(tail);
	return 0;
}
