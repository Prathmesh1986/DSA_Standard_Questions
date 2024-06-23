#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
using namespace std;

/********For 1 Based Indexing***********/
void heapify(vector<int> &arr,int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left<=n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(vector<int> &arr,int n){
    int size=n-1;
    while(size>=1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}

int main(){
    vector<int> arr={-1,4,2,67,43,23,1,2};
    int n=arr.size()-1;
    for(int i=(n/2);i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"Before Sorting "<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
    heapSort(arr,n);
    cout<<"After Sorting "<<endl;
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}









/********For 0 Based Indexing***********/

// void heapify(vector<int> &arr,int n,int i){
// 	int large = i;
// 	int left = 2*i +1;
// 	int right = 2*i + 2;
// 	if(left<n && arr[left]>arr[large]){
// 		large = left;
// 	}
// 	if(right<n && arr[large]<arr[right]){
// 		large = right;
// 	}
// 	if(large != i){
// 		swap(arr[large],arr[i]);
// 		heapify(arr,n,large);
// 	}
// }

// vector<int> buildHeap(vector<int> arr, int n)
// {	
// 	// Write your code here 
// 	for(int i=(n/2 - 1);i>=0;i--){
// 		heapify(arr,n,i);
// 	}
// 	return arr;
// }
