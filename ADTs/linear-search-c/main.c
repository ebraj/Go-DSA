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

//Swapping function
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Linear Search function
int LinearSearch(struct Array *arr,int key){
    for(int i=0;i<arr->length;i++){
        if(key == arr->A[i]){
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main(){
    struct Array arr1={{2,4,6,8,10},10,5};
    int retVal = LinearSearch(&arr1, 8);
    printf("Returned Val : %d \n",retVal);
    displayArray(arr1);
}
