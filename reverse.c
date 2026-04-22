#include<stdio.h>
int main(){

    //input size of array.
    int n;
    scanf("%d",&n);

    //input array .
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //reverse an array.
    int temp = 0;
    for(int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    //print reversed array.
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;

}