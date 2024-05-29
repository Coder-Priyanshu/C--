#include<bits/stdc++.h>
#include<string>
using namespace std;

class hero{
    public:
    string name;
    string dob;
    int id;
};

int main(){

    hero h1;
    cout<<"This program is to understand the concept of Oops"<<endl;
    cout<<"Ente name : ";
    cin>>h1.name;
    cout<<"Ente id : ";
    cin>>h1.id;
    cout<<"Ente dob : ";
    cin>>h1.dob;

    cout<<h1.name<<" "<<h1.dob<<" "<<h1.id<<endl;
    return 0;
}