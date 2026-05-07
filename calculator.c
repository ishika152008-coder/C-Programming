#include<stdio.h>

// define functions
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    return a / b;
}

int main() {
    int choice, x, y;
    scanf("%d", &choice);
    scanf("%d %d", &x, &y);

    int (*fp)(int,int);
    if(choice==1){
        fp=add;
    }else if(choice==2){
        fp=sub;
    }else if(choice==3){
        fp=mul;
    } else if(choice == 4) {
        if(y == 0) {
            printf("Division by zero error");
            return 0;
        }
        fp = divi;
    }else{
        printf("invalid choice");
    }
    printf("%d", fp(x, y));

    return 0;
}