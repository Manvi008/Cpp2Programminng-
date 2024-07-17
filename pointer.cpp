#include<iostream>
using namespace std;
int main(){
    int var=10;
    int *ptr=&var;
    cout<<var<<endl;//Value of variaible 
    cout<<*ptr<<endl;//ptr pointing to the value of the variable.
    cout<<&var<<endl;//address of the variable
    return 0;
}
/*OUTPUT
10
10
0x61ff08*/
