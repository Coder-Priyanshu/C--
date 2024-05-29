// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     // scanf("%d %d",&a,&b);
//     cin>>a>>b;
//     // printf("%d",a+b);
//     cout<<a+b;
//     return 0;
// }
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    _Bool flag=1;
    printf("Enter number :");
    scanf("%d",&a);
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            // printf("It is not in prime");
            flag=0;
        break;
        }
    }
    if(flag==0){
        printf("It is not in prime");
    }
    else{
        printf("prime no");
    }
}