#include<stdio.h>
//finding second maximum in array.
int main(){

    int n;
    scanf("%d",&n);//input size of array.

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);//input array.
    }

    int max=arr[0],second_max=-1001;//declare max,sec max.

    //finding second max.
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }
        if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
    }
    if(second_max!=-1001){
        printf("%d",second_max);
    }
    else{
        printf("no second max exist");
    }
    return 0;
}
