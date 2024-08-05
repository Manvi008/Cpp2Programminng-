#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
	
	node( int data):data(data),next(NULL),prev(NULL){

	}
};
void ForwardTraversal(node* head){
	node* curr = head;
	while(curr != NULL){
	cout<<curr->data<<" ";
	curr = curr->next;
	}
	cout<<endl;
}
void BackTraversal(node* tail){
node* curr =tail;
while(curr != NULL){
cout<<curr->data<<" ";
curr=curr->prev;
}
cout<<endl;	
}


int main(){
node* head = new node(1);
node* second =new node(2);
node* third =new node(3);
head->next= second;
head->next->next = third ;
third->prev =second;
third->prev->prev=head;
cout<<"Forward Travesal"<<endl;
ForwardTraversal(head);
cout<<"Backaward Traversal"<<endl;
BackTraversal(third);

	return 0;
}
