#include<stdio.h>
//sum of array elements.
int sum(int arr[],int n){
    int total=0;
    for(int i=0;i<n;i++){
        total=total+arr[i];
    }return total;
}
int main(){
    //size of array.
    int n;
    scanf("%d",&n);

    //array elements input.
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //calling function for sum of array elements.
    int result=sum(arr,n);

    //printing the sum.
    printf("%d",result);
}