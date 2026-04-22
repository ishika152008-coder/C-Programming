#include<stdio.h>
// inserting element in array.

void insert(int arr[],int n,int pos,int el){
    for(int i = n ; i > pos ;i--){
        arr[i] = arr[i-1];
    }

    // insert number.
    arr[pos] = el;

    //print array.
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }

}
int main(){

    //input size of array.
    int n;
    scanf("%d",&n);

    //input array.
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //input position & element.
    int pos, el;
    scanf("%d %d",&pos,&el);

    //calling function.
    insert(arr,n,pos,el);

    return 0;

}