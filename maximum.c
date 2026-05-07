#include<stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a , b;
    scanf("%d %d",&a,&b);
    int ans = max (a , b);
    printf("%d",ans);
    return 0;
}