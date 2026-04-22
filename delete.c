#include<stdio.h>

// Function to delete an element from array
int deleteElement(int arr[], int size, int el)
{
    int pos = -1;  // store index of element to delete

    // Step 1: Find the position of element
    for(int i = 0; i < size; i++){
        if(arr[i] == el){
            pos = i;      // element found
            break;        // stop after first occurrence
        }
    }

    // Step 2: If element not found, return original size
    if(pos == -1){
        return size;
    }

    // Step 3: Shift elements to left to fill the gap
    for(int i = pos; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }

    // Step 4: Reduce size by 1 and return new size
    return size - 1;
}

int main(){

    int size, arr[100], el;

    // Input size of array
    scanf("%d",&size);

    // Input array elements
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    // Input element to delete
    scanf("%d",&el);

    // Call function and update size
    size = deleteElement(arr, size, el);

    // Print updated array
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}