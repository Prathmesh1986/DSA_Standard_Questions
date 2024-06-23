#include<iostream>
#include<vector>
#include<queue>
using namespace std;

//finds min element from array and swaps it 
//adv: 1) efficient for small data sets or nearly sorted data
//disadv: 1) inefficient due to lot of comparisions


void selectionSort(vector<int> &arr,int n){
    int i,j,minIndex;
    for(i=0;i<n;i++){
        minIndex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])minIndex=j;
        }
        if(minIndex!=i)swap(arr[i],arr[minIndex]);
    }
}

int main(){
    vector<int> arr={4,2,67,43,23,1,2};
    int n=arr.size();
    cout<<"Before Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    selectionSort(arr,n);
    cout<<"After Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
