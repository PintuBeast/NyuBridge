// Author: Abhishek Jayakumar Kurup
// Last updated: 2023-07-17
#include<iostream>
using namespace std;
int johnDays,johnHours,johnMinutes,billDays,billHours,billMinutes;
int totalDays,totalHours,totalMinutes;
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
    totalMinutes=johnMinutes+billMinutes;
    totalHours=johnHours+billHours;
    totalDays=johnDays+billDays;
    if(totalMinutes>60)
    {
        totalMinutes=totalMinutes-60;
        ++totalHours;
    }
    if(totalHours>24)
    {
        totalHours=totalHours-24;
        ++totalDays;
    }
    
    cout<<"The total time both of them worked together is: "
        <<totalDays<<" days, "<<totalHours<<" hours and "
        <<totalMinutes<<" minutes";
    
    return 0;
}