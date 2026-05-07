#include<stdio.h>
void checkEvenOdd(int n){
    if(n%2==0){
        printf("even");
    }else{
        printf("odd");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    checkEvenOdd(n);
    return 0;
}