#include<stdio.h>
#include<math.h>

int main(){
int x,n,result=0,rem;

    printf("Enter number : ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        rem=n%10;
        result=result*10+rem;
        n=n/10;
    }
    if(result==x){
        printf("Palindrome");
    }
    else{
        printf("Not-palindrome");
    }
}