
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//picks element from unsorted part and place it in its correct position
//adv: 1) efficient for small data sets or nearly sorted data
//disadv: 1) inefficient due to lots of swaps which makes it slower


void insertionSort(vector<int> &arr,int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main(){
    vector<int> arr={4,2,67,43,23,1,2};
    int n=arr.size();
    cout<<"Before Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    insertionSort(arr,n);
    cout<<"After Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
