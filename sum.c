#include<stdio.h>

int sumArray(int *a, int n) {
    int sum = 0;
    int *ptr = a;
    for(int i=0;i<n;i++){
        sum += *(ptr+i);
    }return sum;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", sumArray(arr, n));

    return 0;
}