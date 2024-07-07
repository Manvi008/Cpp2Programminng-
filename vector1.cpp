#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,13,14,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> vect(arr, arr+n);
    cout<<"the value of vector is ";//for traversing the vector 
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
}
cout<<endl;
sort(vect.begin(),vect.end());//for sorting the vector in ascending order
cout<<"the sorted vector is"<<" ";
for(int i=0;i<n;i++){
    cout<<vect[i]<<" ";
}
cout<<endl;
sort(vect.begin(),vect.end(),greater<int>());//for sorting the vector in the descending order 
cout<<"the sorted vector in desecending order is";
for(int i=0;i<n;i++){
    cout<<vect[i]<<" ";
}
cout<<endl;
reverse(vect.begin(),vect.end());//for reversing the vector 
cout<<"the reverse of the vector is";
for(int i=0;i<n;i++){
    cout<<vect[i]<<" ";
}
/* output
  the value of vector is 12 13 14 10 
the sorted vector is 10 12 13 14
the sorted vector in desecending order is14 13 12 10
the reverse of the vector is10 12 13 14*/
