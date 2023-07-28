#include<iostream>
using namespace std;
const double clubDiscountRate=0.9;
const double offerDiscountRate=0.5;
int main()
{
    double priceOfItem1,priceOfItem2,taxRate,lowerPrice,higherPrice;
    char clubCardResponse;

    cout<<"Enter price of first item: ";
    cin>>priceOfItem1;
    cout<<"Enter price of second item: ";
    cin>>priceOfItem2;
    cout<<"Does customer have a club card ? (Y/N): ";
    cin>>clubCardResponse;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;
    cout<<"Base price: "<<priceOfItem1+priceOfItem2<<"\n";
    double discountedPrice;
    if(priceOfItem1<priceOfItem2)
    {
        lowerPrice=priceOfItem1;
        higherPrice=priceOfItem2;
    }
    else
    {
        lowerPrice=priceOfItem2;
        higherPrice=priceOfItem1;

    }

    switch(clubCardResponse)
    {
        case 'y':
        case 'Y':
            discountedPrice=(higherPrice+offerDiscountRate*lowerPrice)*clubDiscountRate;
            break;
        case 'n':
        case 'N':
            discountedPrice=(higherPrice+offerDiscountRate*lowerPrice);
            break;               
        default:
            discountedPrice=(higherPrice+offerDiscountRate*lowerPrice);    

    }
    cout<<"Price after discounts: "<<discountedPrice<<"\n";
    cout<<"Total Price: "<<discountedPrice*(1.0+taxRate/100.0);
return 0;
}
