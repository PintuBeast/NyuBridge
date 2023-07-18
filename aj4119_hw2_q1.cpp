// Author: Abhishek Jayakumar Kurup
// Last updated: 2023-07-17
#include<iostream>
using namespace std;
int numPennies,numQuarters,numDimes, numNickels;
int sumInPennies,numDollars,numCents;
int main()
{
    cout<<"Please enter the number of coins\n";
    cout<<"# of quarters: ";
    cin>>numQuarters;
    cout<<"# of dimes: ";
    cin>>numDimes;
    cout<<"# of nickels: ";
    cin>>numNickels;
    cout<<"# of pennies: ";
    cin>>numPennies;  
    sumInPennies=numQuarters*25+numDimes*10+numNickels*5+numPennies;
    numDollars=sumInPennies/100;
    numCents=sumInPennies%100;   
    cout<<"The total is "<<numDollars<<" dollars and "<<numCents<<" cents\n"; 
    return 0;  
}
