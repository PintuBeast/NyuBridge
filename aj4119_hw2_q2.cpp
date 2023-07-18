// Author: Abhishek Jayakumar Kurup
// Last updated: 2023-07-17
#include<iostream>
using namespace std;
int numDollars,numCents,sumInPennies;
int numPennies,numQuarters,numDimes, numNickels;
int main()
{
    cout<<"Please enter your amount in the format of dollars and cents seperated by a space:\n";
    cin>>numDollars>>numCents;
    sumInPennies=numDollars*100+numCents;
    numQuarters=sumInPennies/25;
    numDimes=(sumInPennies%25)/10;
    numNickels=((sumInPennies%25)%10)/5;
    numPennies=((sumInPennies%25)%10)%5;
    cout<<numDollars<<" dollars and "<<numCents<<" cents are:\n"
        <<numQuarters<<" quarters, "<<numDimes<<" dimes, "
        <<numNickels<<" nickels and "<<numPennies<<" pennies";
    return 0;
}