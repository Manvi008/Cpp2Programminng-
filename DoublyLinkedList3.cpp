#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *prev;
    node *next ;
    node(int vals){
        data = vals;
        prev = next = NULL;
    }
};
node* insertAtend(node* head,int data){
    node* temp = new node(data);
   // node* head= NULL;
    if(head  == NULL){
        return temp;
    }
    node* curr =head;

        while(curr->next != NULL){
           curr = curr ->next;}
           
           curr->next =temp;
           temp->prev =curr;
        
        return head;
    
    
}
void printlist(node* head){
    node* curr = head;
    while(curr != NULL){
        cout<<curr->data<<endl;
        curr = curr->next;
    }
  // return head; 
}
 int main(){
     node *head = new node(10);
     node *temp1 = new node(20);
     node *temp2 = new node(30);
     head->next = temp1;
     temp1->next =temp2;
     temp1->prev =head;
     temp2->prev =temp1;
     insertAtend(head , 40);
     printlist(head);
     return 0;
 }
