#include<iostream>
using namespace std;
int main(){
    int itemno,quantity;
    float amount,unitprice,bill;
    cout<<"Enter the itemno.";
    cin>>itemno;
    cout<<"Enter the quantity";
    cin>>quantity;
    cout<<"Enter the unit price";
    cin>>unitprice;
    amount=quantity*unitprice;
    bill=amount-0.2*(amount);
    cout<<"total bill amount is"<<bill;
    return 0;
}