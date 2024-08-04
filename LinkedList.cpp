#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    else{
        Node *temp =head;
        head = head->next;
        delete temp;
       
    }
    return head;
}
void PrintList(Node *head){
    while(head !=NULL){
        cout<<head->data<<" ";
        head =head->next;
    }
}
int main(){
    Node *head= new Node(10);
    head->next= new Node(20);
    head->next->next = new Node(30);
    head->next->next =new Node(40);
    cout<<"Original list";
    PrintList(head);
    cout<<endl;
    head=deleteHead(head);
    cout<<"List after deleting the list";
    PrintList(head);
    return 0;
}
