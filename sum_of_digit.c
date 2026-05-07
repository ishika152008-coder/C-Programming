#include<stdio.h>
int sumOfdigit(int n){
    int sum=0;
    while(n>0){
        int quo = n % 10; 
        sum = sum + quo;
        n = n / 10 ;
    }return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int ans = sumOfdigit(n);
    printf("%d",ans);
    return 0;
}