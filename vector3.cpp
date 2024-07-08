#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,13,14,20,23,45,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> vect(arr, arr+n);
    
   sort(vect.begin(),vect.end());
   auto p=lower_bound(vect.begin(),vect.end(),20);

   auto q=upper_bound(vect.begin(),vect.end(),20);
   cout << "The lower bound is at position: ";
    cout << q-vect.begin() << endl;
 
    cout << "The upper bound is at position: ";
    cout << p-vect.begin() << endl;
 
    return 0;
}
/* tells about the lower bound and the upper bound */
/*o/p
  The lower bound is at position: 6
The upper bound is at position: 5*/
