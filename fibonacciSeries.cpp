#include<bits/stdc++.h>
using namespace std;
//0 1 1 2 3 5 8 .  .  .
int fibo(int x){
    if(x==0){
        return 0;
    }
    else if( x==1){
        return 1;
    }else{
        return fibo(x-2)+fibo(x-1);
    }
}
int main(){
    int x;
   cout<<"Enter the element : ";
   cin>>x;
   for(int i=0;i<x;i++){
    cout<<fibo(i)<<" ";
   }
   return 0;
}