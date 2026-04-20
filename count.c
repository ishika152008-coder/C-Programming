#include<stdio.h>
//count frequency of an element.
int main(){
    int n;//size of array.
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);//input array element.
    }

    int j;
    scanf("%d",&j);//searching element.

    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==j){
            count=count+1;//count element frequency.
        }
    }

    printf("%d",count);

    return 0;
}