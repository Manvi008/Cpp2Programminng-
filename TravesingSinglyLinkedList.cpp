#include<iostream>
using namespace std;
class node{// definig a class to reperesnt eery element of the singly linked list
  public:
  int data ;
  node* next;
  node(int data){
    this-> data=data;
    this-> next=nullptr;
  }
};
int main(){
  node *head=new node(10);// defining th e head of gthe singly linked list.
  head->next=new node(20);// inserting element in the singly linked list.
  head->next->next=new node(30);
  head->next->next->next=new node(40);
  node *ptr=head;
  while(ptr!=nullptr){//pronting the element it the singly linked list
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }
  cout<<endl;
  return 0;
}
/*OUTPUT
10 20 30 40*/
