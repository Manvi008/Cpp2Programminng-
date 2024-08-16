#include <bits/stdc++.h>
using namespace std;
# define N 5
int Mystack[ N];
int top = -1;
void push(){
    int x;
    cout<<" Enter the value to ne pushed ";
    cin >>x;
    if(top == N-1){
       cout<< "Overflow";
      
    }
    else {
        top ++;
        Mystack[top] = x;
    }
}
void pop(){
     int item ; 
     if (top == -1){
         cout<<" Underflow";
     }
     else{
         item = Mystack[top];
         top--;
         cout<<item;
     }
}
 void peek (){
    if (top == -1) {
        cout<<" Stack is Empty";
    }
    else {
        cout<<Mystack[top];
    }
 }
 void display(){
     for(int i = top ; i >= 0 ; i--){
         cout<< Mystack[i]<<" ";
     }
 }
int main() {
    int choice;
    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice\n";
        }
    }
    return 0;
}
