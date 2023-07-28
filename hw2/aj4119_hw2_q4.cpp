// Author: Abhishek Jayakumar Kurup
// Last updated: 2023-07-17
#include<iostream>
using namespace std;
int x,y;      // x and y are for two user inputs
int main()
{
    cout<<"Please enter two positive integers, separated by a space:\n";
    cin>>x>>y;
    cout<<x<<" + "<<y<<" = "<<x + y<<"\n";
    cout<<x<<" - "<<y<<" = "<<x - y<<"\n";
    cout<<x<<" * "<<y<<" = "<<x * y<<"\n";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout<<x<<" / "<<y<<" = "<<(float) x / y<<"\n";
    cout<<x<<" div "<<y<<" = "<<(int) x / y<<"\n";
    cout<<x<<" mod "<<y<<" = "<<x % y<<"\n";
    return 0;
}