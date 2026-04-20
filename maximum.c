#include<stdio.h>
//finding maximum in array.
int main(){

    int n;
    scanf("%d",&n);//input size of array.

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);//array element input.
    }
    
    int max=arr[0];//declare max.

    //finding max element.
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    //print maximum element.
    printf("%d",max);

    return 0;
}