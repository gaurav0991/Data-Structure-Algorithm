function swap(arr,idx,rightidx){
    let temp=arr[idx];
    arr[idx]=arr[rightidx];
    arr[rightidx]=temp;
}
function pivot(arr,left,right){
    let pivot=arr[left];
    let swapIdx=left;
    for(let start=left+1;start<arr.length;start++){
        if(pivot>arr[start]){
        swapIdx++;
        swap(arr,start,swapIdx);
        }
    }
    swap(arr,left,swapIdx);
    return swapIdx
}
function quickSort(arr,left,right){
    if(left<right){
        let pivotIdx=pivot(arr,left,right);
        quickSort(arr,left,pivotIdx-1);
        quickSort(arr,pivotIdx+1,right);
    }
    return arr;
}
console.log(quickSort([4,1,3,7,9,2,8,6,5],0,9 ));