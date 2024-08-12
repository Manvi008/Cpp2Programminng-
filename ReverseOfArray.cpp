#include<iostream>
using namespace std;
 int reverseArray(int *arr,int n){
     if (n ==0){
         return 0;
     }
     else {
         cout<<arr[n-1]<<" ";
         reverseArray(arr,n-1);
     }
 }
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array";
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
        
    }
    cout<<" reverse of the array is "<<endl;
    reverseArray(arr,n);
    return 0;
}
