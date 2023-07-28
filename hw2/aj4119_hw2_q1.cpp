// Author: Abhishek Jayakumar Kurup
// Last updated: 2023-07-17
#include<iostream>
using namespace std;
const int QUARTERS_TO_PENNIES=25;   //factor to convert Quarter to pennies
const int DIMES_TO_PENNIES=10;      //factor to convert Dimes to pennies
const int NICKELS_TO_PENNIES=5;     //factor to convert Nickels to pennies
const int DOLLARS_TO_PENNIES=100;   //factor to convert Dollars to pennies
int numPennies,numQuarters,numDimes, numNickels;
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
    int sumInPennies = numQuarters * QUARTERS_TO_PENNIES + numDimes * DIMES_TO_PENNIES + numNickels * NICKELS_TO_PENNIES + numPennies;
    int numDollars = sumInPennies / DOLLARS_TO_PENNIES;
    int numCents = sumInPennies % DOLLARS_TO_PENNIES;   
    cout<<"The total is "<<numDollars<<" dollars and "<<numCents<<" cents\n"; 
    return 0;  
}
