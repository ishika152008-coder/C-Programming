#include<stdio.h>

int secondLargest(int *a, int n) {
    int max = *a;
    int second = *a;

    for(int i = 1; i < n; i++) {
        int val = *(a + i);

        if(val > max) {
            second = max;
            max = val;
        }
        else if(val > second && val != max) {
            second = val;
        }
    }

    return second;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", secondLargest(arr, n));

    return 0;
}