#include<stdio.h>
int power(int a, int b){
    int pow=1;
    for(int i=1;i<=b;i++){
        pow = pow * a;
    }   return pow; 
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = power(a , b);
    printf("%d",ans);
}