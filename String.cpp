/*C++ strings are sequences of characters stored in a char array. Strings are used to store words and text. 
  They are also used to store data, such as numbers and other types of information. 
  Strings in C++ can be defined either using the std::string class or the C-style character arrays.
  1. C Style Strings
These strings are stored as the plain old array of characters terminated by a null character ‘\0’. They are the type of strings that C++ inherited from C language
Syntax;
char str[] = "GeeksforGeeks";
  */
#include<iostream>
using namespace std;
int main()

{
    char s[]="geeksforgeeks";
    cout<<s<<endl;
   
    return 0;
}
/*output
geeksforgeeks*/
