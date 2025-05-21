// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&numbers , int left , int mid , int right) {
    int n1 = mid-left+1;
    int n2 = right-mid;
     int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = numbers[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = numbers[mid + 1 + j];
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            numbers[k++] = L[i++];
        else
            numbers[k++] = R[j++];
    }

    
    // Copy remaining elements of L[], if any
    while (i < n1)
        numbers[k++] = L[i++];

    // Copy remaining elements of R[], if any
    while (j < n2)
        numbers[k++] = R[j++];
}
void mergeSort(vector<int> &numbers , int left , int right){
    if(left<right){
        int mid = left +(right - left)/2;
        mergeSort(numbers  , left , mid);
        mergeSort(numbers  , mid+1 , right);
        merge(numbers , left , mid , right);
    }
}
void printArray(vector<int>numbers, int n) {
    for (int i = 0; i < n; i++)
        cout << numbers[i] << " ";
    cout << endl;
}
int main() {
    // Write C++ code here
    vector<int> numbers = {9,66, 44,3,1};
    int n = numbers.size();
    cout<<"Original Array is ";
    printArray(numbers, n);
    mergeSort(numbers , 0 , n-1);
    cout<<"Sorted Array is";
    printArray(numbers , n );

    return 0;
}
