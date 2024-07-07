
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,13,14,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> vect(arr, arr+n);
    
   
cout<<"maximium number of the vector is";//fpr finding the maximum vector 
cout<<*max_element(vect.begin(),vect.end());
cout<<endl;
cout<<"minimum of the vector is ";//for finding the minimum vector 
cout<<*min_element(vect.begin(),vect.end());
cout<<endl;
cout<<"the sum of the vector elements is ";//for finding the sum of the vector
cout<<accumulate(vect.begin(),vect.end(),0);
    cout<<endl;
    cout<<"occurence of the element in the vector is";
cout<<count(vect.begin(),vect.end(),10);
}

/* output
maximium number of the vector is14
minimum of the vector is 10
the sum of the vector elements is 49
occurence of the element in the vector is 2*/
