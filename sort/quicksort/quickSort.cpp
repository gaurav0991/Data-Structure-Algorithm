#include<bits/stdc++.h>
using namespace std;
void swap(int arr[],int left,int right){
    int temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
}
int pivot(int arr[],int left,int right){
    int swapIdx=left;
    for(int i=left+1;i<9;i++){
        if(arr[i]<arr[left]){
            swapIdx++;
            swap(arr,swapIdx,i);
        }
    }
    swap(arr,left,swapIdx);
    return swapIdx;
}
void quickSort(int arr[],int left,int right){
    if(left<right){
        int pivotIx=pivot(arr,left,right);
        quickSort(arr,left,pivotIx-1);
        quickSort(arr,pivotIx+1,right);


    }
    return;
}
int main(){
    int arr[9]={4,1,3,7,9,2,8,6,5};
    quickSort(arr,0,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}