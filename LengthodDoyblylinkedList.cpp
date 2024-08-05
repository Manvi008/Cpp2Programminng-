#include<bits/stdc++.h>
using namespace std;
struct node{
    int data ;
    node* next;
    node* prev;
    node(int data): data(),prev(NULL),next(NULL){
        
    }
};
int FindLength(node* head){
    int count =0;
    for(node* curr=head ; curr!=NULL ; curr= curr->next){
        count ++;
        
    }
    return count;
}

int main(){
    node* head = new node(1);
    head ->next = new node(2);
    head ->next->next =new node(3);
    head->next->next->next =new node(4);
    cout<<"length of the node is "<<FindLength(head)<<endl;
    return 0;
}
