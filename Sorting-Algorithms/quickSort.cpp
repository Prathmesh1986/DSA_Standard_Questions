#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i=low,j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){i++;}
        while(arr[j]>pivot && j>= low){j--;}
        if(i<j)swap(arr[i],arr[j]);
    } 
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}

int main(){
    vector<int> arr={4,2,67,43,23,1,2};
    int n=arr.size();
    cout<<"Before Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    quickSort(arr,0,n-1);
    cout<<"After Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
