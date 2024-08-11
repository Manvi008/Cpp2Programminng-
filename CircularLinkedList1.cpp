#include<iostream>
using namespace std;
 struct node{
    int data;
    node* next;
    node(int value ){
        data = value;
        next =NULL;
    }
};
node* insertInEmptyList( node* last, int data){
    if(last != NULL){
        return last;
    }
    node* newnode = new node(data);
    newnode->next =newnode;
    last = newnode;
    return last;
}
void printList(node* last ){
    if(last ==NULL){
        return;
    }
    node* head = last ->next;
    while(true){
        cout<<head->data<<" ";
        head = head ->next;
        if(head == last ->next)
        break;
        
    }
    cout<<endl;
}
int main(){
    node *last = NULL;

    // Insert a node into the empty list
    last = insertInEmptyList(last, 1);

    // Print the list
    cout << "List after insertion: ";
    printList(last);

    return 0;
}
