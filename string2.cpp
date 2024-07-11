/*how to take string as input and then show it*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string "<<endl;
    cin>>s;
    cout<<"the string is "<<s;
    return 0;
}
/*Methid2*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string "<<endl;
    getline(cin,s);//using getline() function
    cout<<"the string is "<<s;
    return 0;
}
/*Method 3*/
#include <iostream>
#include <sstream>
#include<string>

using namespace std;

int main()
{

	string s = " GeeksforGeeks to the Moon ";
	stringstream obj(s);
	// string to store words individually
	string temp;
	// >> operator will read from the stringstream object
	while (obj >> temp) {
		cout << temp << endl;
	}
	return 0;
}
