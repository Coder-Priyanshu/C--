#include<stdio.h>
#include<math.h>

int facto(int n){
    if(n==0||n==1)
    return 1;
    return n*facto(n-1);
}

int main(){
int x,n,result=0,rem;

    printf("Enter number : ");
    scanf("%d",&n);
    x=facto(n);
    printf("%d",x);
}