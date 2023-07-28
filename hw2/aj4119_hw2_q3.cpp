// Author: Abhishek Jayakumar Kurup
// Last updated: 2023-07-17
#include<iostream>
using namespace std;
const int MAX_HOURS=24;    //Hours to Days conversion factor
const int MAX_MINUTES=60;  //Minutes to Hours conversion factor
int johnDays,johnHours,johnMinutes,billDays,billHours,billMinutes;
int main()
{
    cout<<"Please enter the number of days John has worked:";
    cin>>johnDays;
    cout<<"Please enter the number of hours John has worked:";
    cin>>johnHours;   
    cout<<"Please enter the number of minutes John has worked:";
    cin>>johnMinutes;
    cout<<"\n";

    cout<<"Please enter the number of days Bill has worked:";
    cin>>billDays;
    cout<<"Please enter the number of hours Bill has worked:";
    cin>>billHours;  
    cout<<"Please enter the number of minutes Bill has worked:";
    cin>>billMinutes;
    cout<<"\n";
    int totalMinutes = johnMinutes + billMinutes;
    int totalHours = johnHours + billHours;
    int totalDays = johnDays + billDays;
    if(totalMinutes > MAX_MINUTES)
    {
        totalMinutes = totalMinutes - MAX_MINUTES;
        ++totalHours;
    }
    if(totalHours > MAX_HOURS)
    {
        totalHours = totalHours - MAX_HOURS;
        ++totalDays;
    }
    cout<<"The total time both of them worked together is: "
        <<totalDays<<" days, "<<totalHours<<" hours and "
        <<totalMinutes<<" minutes";
    return 0;
}