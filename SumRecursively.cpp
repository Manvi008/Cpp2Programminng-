#include <iostream>
using namespace std;
int nSum(int n){
    if(n==0){
        return 0;
    }
    int res = n + nSum(n-1);
    return res;
}
int main(){
    int n;
    printf("Enter the number ");
    cin>>n;
    cout<<"result is "<<endl;
    int sum = nSum(n);
    cout<<sum;
    return 0;
}
