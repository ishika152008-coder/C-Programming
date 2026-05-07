#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }return fact;
}
int main(){
    int n;
    scanf("%d",&n);
    int ans = factorial(n);
    printf("%d",ans);
    return 0;
}