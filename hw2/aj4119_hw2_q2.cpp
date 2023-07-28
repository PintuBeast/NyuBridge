// Author: Abhishek Jayakumar Kurup
// Last updated: 2023-07-17
#include<iostream>
using namespace std;
const int QUARTERS_TO_PENNIES=25;   //factor to convert Quarter to pennies
const int DIMES_TO_PENNIES=10;      //factor to convert Dimes to pennies
const int NICKELS_TO_PENNIES=5;     //factor to convert Nickels to pennies
const int DOLLARS_TO_PENNIES=100;   //factor to convert Dollars to pennies
int numDollars,numCents;
int main()
{
    cout<<"Please enter your amount in the format of dollars and cents seperated by a space:\n";
    cin>>numDollars>>numCents;
    int sumInPennies=numDollars * DOLLARS_TO_PENNIES + numCents;
    int numQuarters=sumInPennies / QUARTERS_TO_PENNIES;
    int numDimes=(sumInPennies % QUARTERS_TO_PENNIES) / DIMES_TO_PENNIES;
    int numNickels=((sumInPennies % QUARTERS_TO_PENNIES) % DIMES_TO_PENNIES) / NICKELS_TO_PENNIES;
    int numPennies=((sumInPennies % QUARTERS_TO_PENNIES) % DIMES_TO_PENNIES) % NICKELS_TO_PENNIES;
    cout<<numDollars<<" dollars and "<<numCents<<" cents are:\n"
        <<numQuarters<<" quarters, "<<numDimes<<" dimes, "
        <<numNickels<<" nickels and "<<numPennies<<" pennies";
    return 0;
}