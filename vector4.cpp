#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={12,13,14,20,23,45,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> vect(arr, arr+n);
    
  cout<<"given vector is ";//fpr printing the given vector 
  for(int i=0;i<n;i++){
    cout<<vect[i]<<" ";
    }
    cout<<endl;
    vect.erase(find(vect.begin(),vect.end(),20));//to remove the specific element 
    cout<<"vector after the removal of the element is ";
    for(int i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl;
    vect.erase(unique(vect.begin(),vect.end()),vect.end());//to remove the duplicates
    cout<<"vector after duplicates removal is";
    for(int i=0;i<n;i++)
    {
        cout<<vect[i]<<" ";
    }
  
    return 0;
}
/*O/P
  given vector is 12 13 14 20 23 45 10 10 
vector after the removal of the element is 12 13 14 23 45 10 10 10 
vector after duplicates removal is12 13 14 23 45  */

