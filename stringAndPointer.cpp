#include<iostream>
using namespace std;
int main(){
    string s="GeeksForGeeks";
    char *ptr=&s[0];//to /pass the address of the string to the pointer
    while(*ptr!='/0'){//gona print till the value doesnot becomes null
        cout<<*ptr;
        ptr++;

    }
    cout<<endl;
return 0;
}

/*OUTOUT
GeeksForGeeks*/
