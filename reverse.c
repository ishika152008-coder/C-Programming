#include<stdio.h>

void reverse(int *a, int n) {
    int temp = 0;
    int *ptr = a;
    int *b = a+n-1;
    for(int i=0;i<n/2;i++){
        temp = *ptr ;
        *ptr = *b;
        *b = temp;
        ptr ++;
        b--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, n);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}