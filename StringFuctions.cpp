
#include<iostream>
using  namespace std;
int main(){
	string::iterator itr;
	string:: reverse_iterator rit;
	string s="Geeksforgeeks";
	itr=s.begin();//ITERATORN FUCTION TO FIND THE FIRST STRING
	cout<<"pointer to the start of the string "<<*itr<<endl;
	itr=s.end()-1;/TO FIND THE LAST STRING CHARACHTER
	cout<<"pointer to the end of the string is "<<*itr<<endl;
	rit=s.rbegin();
	cout<<"pointer from the the back start of the string is "<<*rit<<endl;
    rit=s.rend()-1;
	cout<<"point at the end in the reverse string is "<<*rit<<endl;
	return 0;
}
/*OUTPUT
pointer to the start of the string G
pointer to the end of the string is s
pointer from the the back start of the string is s
point at the end in the reverse string is G*/
