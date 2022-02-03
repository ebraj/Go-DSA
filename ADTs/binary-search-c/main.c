#include <stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};

//Making the display function
void displayArray(struct Array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
    printf("\n");
}

//Making the Binary Search function
int binarySearch(struct Array arr,int key){
    int l,h,mid;
    l = 0;
    h = arr.length - 1;
    while (l<=h) {
        mid = (l+h)/2;
        if(key == arr.A[mid]){
            return mid;
        }else if(key < arr.A[mid]){
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    return -1;
}

//Making the Binary Search using recursive
int rBinarySearch(int arr[],int l,int h,int key){
    int mid = 0;
    if(l<=h){
        mid=(l+h)/2;
        if(key == arr[mid]){
            return mid;
        }else if(key < arr[mid]){
            return rBinarySearch(arr, l, mid-1, key);
        }else{
            return rBinarySearch(arr, mid+1, h, key);
        }
    }
    return -1;
}

int main(){
    struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
    displayArray(arr1);
    int retVal = binarySearch(arr1, 32);
    int rRetVal = rBinarySearch(arr1.A, 0, arr1.length, 32);
    printf("Returned Index from BS : %d \n",retVal);
    printf("Returned Index from RBS: %d \n",rRetVal);
    return 0;
}

