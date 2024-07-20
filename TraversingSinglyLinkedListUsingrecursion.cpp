#include<iostream>
using namespace std;
class node{// DEFINIG A NODE
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=nullptr;
    }};
    void TraversingList(node *ptr){//FUNCTION  TO TRAVERSE A LINKED LIST
        if(ptr==nullptr){
            cout<<" ";
            return;}
            cout<<ptr->data<<" ";
          TraversingList(ptr->next);

    }
 int main(){
    node *head =new node(10);// DEFINING THE HEAD 
    head->next=new node(20);// INSERTING ELEMENT IN THE LINKED LIST
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    TraversingList(head);
    return 0;
 }
/*OUTPUT
10 20 30 40 */
