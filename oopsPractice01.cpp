#include<bits/stdc++.h>
using namespace std;

//  int main(){
//     int x=10, a=-3;
// x=+a;
// printf("%d",x);
//  }



//---------------------------------Days of the week---------------------------------


string dayOfTheWeek(int day, int month, int year) 
{

    if (month < 3) {

        month += 12;

        year -= 1;

    }

 

    int k = year % 100;

    int j = year / 100;

    int dayOfWeek = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

 

    switch (dayOfWeek) {

        case 0:

            return "Saturday";

        case 1:

            return "Sunday";

        case 2:

            return "Monday";

        case 3:

            return "Tuesday";

        case 4:

            return "Wednesday";

        case 5:

            return "Thursday";

        case 6:

            return "Friday";

        default:

            return "Invalid"; 

    }

}

int main(){
    int a,b,c;
    cout<<"Enter data : ";
    cin>>a;
    cout<<"Enter month : ";
    cin>>b;
    cout<<"Enter year : ";
    cin>>c;
    string day=dayOfTheWeek(a,b,c);
    cout<<"The day is :: "<<day<<endl;
    return 0;
}