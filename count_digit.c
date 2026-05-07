#include<stdio.h>
int countDigits(int n){
    int count = 0;
    while(n>0){
        int quo = n % 10;
        count = count + 1;
        n = n / 10;
    }return count;
}
int main(){
    int n;
    scanf("%d",&n);
    int ans = countDigits(n);
    printf("%d",ans);
    return 0;
}