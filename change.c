#include<stdio.h>

void change(int **p) {
    **p = 2* **p;
}

int main() {
    int x ;
    scanf("%d",&x);
    int *ptr = &x;

    change(&ptr);

    printf("%d", x);

    return 0;
}