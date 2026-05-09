#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int sum = 0;

    while(n>0){
        int quo = n % 10;
        sum = sum + quo;
        n = n / 10;
    }
     
    printf("%d",sum);

    return 0;
}