#include<bits/stdc++.h>
using namespace std;
struct node{
  int data ;
  node* next;
  node* prev;
  node(int data):data(data),prev(NULL),next(NULL){
      
  }
};
node* insertAtBeginning(node* head, int data){
    node* temp =new node(data);
    temp->next=head;
    if(head !=NULL){
        head->prev=temp;
    }
    return temp;
}
void PrintList(node* head){
    node* curr=head;
    while(curr != NULL){
        cout<<curr->data<<" "<<endl;
        curr=curr->next;
    }
}
int main(){
    node* head= new node(10);
    node *temp1=new node(20);
    node* temp2= new node(30);
    head->next=temp1;
    temp1->next=temp2;
    temp2->prev=temp1;
    head= insertAtBeginning(head,5);
    PrintList(head);
    return 0;
}
