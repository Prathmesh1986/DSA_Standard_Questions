#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//stable means it maintains the relative order of equal elements in the array
//Quick , Heap , Selection are unstable sorting algorithms.
//Bubble , Insertion , Merge are stable sorting algorithms.

void bubbleSort(vector<int> &arr,int n){
    
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                swapped=true;
            }    
        }
        if(!swapped)break;
    }
}

int main(){
    vector<int> arr={4,2,67,43,23,1,2};
    int n=arr.size();
    cout<<"Before Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    bubbleSort(arr,n);
    cout<<"After Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
