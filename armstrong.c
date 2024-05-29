#include<stdio.h>
#include<math.h>

int main(){
    int n,x,result=0,rem;
    int count=0;
    printf("Enter number : ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        n=n/10;
        count++;
    }
    n=x;
    while(n!=0){
        rem=n%10;
        int data=pow(rem,count);
        result=result+data;
        n=n/10;
    }
    if(x==result){
        printf("Armstrong");
    }else{
        printf("Not-Armstrong");
    }

}