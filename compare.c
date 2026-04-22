#include <stdio.h>
//compare elements of an array.

void compare(int arr[],int n){
    int flag = 1;
    for(int i = 0; i< n/2; i++){
        if(arr[i]!=arr[n-i-1]){
            flag = 0;
            break;
        }
        }
    if(flag == 0){
        printf("Not Equal");
    }else{
        printf("Equal");
    }
    }

int main()
{
    //input size of array.
    int n;
    scanf("%d",&n);
    
    //input array.
    int arr[10];
    for(int i = 0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    
    //calling function.
    compare(arr,n);
   
    return 0;
}