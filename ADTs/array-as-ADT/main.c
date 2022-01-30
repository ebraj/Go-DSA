#include <stdio.h>
#include <stdlib.h>

struct Array{
    int *A;
    int length;
    int size;
};

/*
Creating the display function
*/
void DisplayArray(struct Array arr){
    printf("Elements are:\n");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}
/*
Appending an element
*/
void AppendArray(struct Array *arr,int x){
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}
/*
 Inserting the element to array
*/
void InsertToArray(struct Array *arr,int index,int x){
    if(index >=0 && index <= arr->length){
        for (int i=arr->length;i>index; i--) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
/*
 Deleting the Element from the Array
*/
void DeleteFromArray(struct Array *arr,int index){
    int delEl = 0;
    if(index >=0 && index <=arr->length){
        for (int i=index; i<arr->length-1; i++) {
            delEl = arr->A[index];
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }
    printf("\nDeleted Element: %d \n",delEl);
}

int main(){
    struct Array arr;
    printf("Enter the size of array: ");
    scanf("%d",&arr.size);
    
    //Creating the dynamic array
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    printf("Enter all the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length = n;
    
    //Displaying the values:
    AppendArray(&arr, 100);
    InsertToArray(&arr, 5, 101);
    DeleteFromArray(&arr, 5);
    DisplayArray(arr);
    return 0;
}
