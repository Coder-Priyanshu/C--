#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

#define max 100
void removeVowels(string st){
    string stnew;
    int n=st.length();
    for(int i=0;i<n;i++){
        if(st[i]=='a' ||st[i]=='e' ||st[i]=='i' ||st[i]=='o' ||st[i]=='u'){
            // st[i]=st[i+1];
        }else{
            stnew=stnew+st[i];
        }
    }
    cout<<stnew;
}

int main(){
    string st;
    cin>>st;
    cout<<st<<endl;
    removeVowels(st);
    // cout<<st<<endl;
    return 0;
}