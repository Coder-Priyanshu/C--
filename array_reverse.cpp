#include<iostream>
using namespace std;

int main(){
    int a[10],i,j;
    cout << "Enter elements in array : \n";
    for(i=0;i<10;i++){
        cout << "Enter "<< i+1 <<" element : ";
        cin >> a[i];
    }
    cout<<"The entered element of array : \n";
    for(i=0;i<10;i++){
        cout << i+1<<" Element is " << a[i]<<"\n";
    }

}