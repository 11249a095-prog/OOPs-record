#include<iostream>
#include <iomanip>
using namespace std;
class EBbill
{
    private:
    int customername[50],address[50];
    float amount;
    public:
    void getcustomerdetails();
    void calculateEBbill();
    void displayEBbill();
};
void EBbill::getcustomerdetails()
{
    cout<<"Enter customer_id:";
    cin>>customer_id;
    cout<<"Enter customername:";
    cin>>customername;
    cout<<"Enter address:";
    cin>>address;
    cout<<"Enter no.of units:";
    cin>>units;
}
void EBbill::calculateEBbill()
{
    if(units<=100)
    amount=0;
    else if(units<=200)
    amount=(units-100)*2.25;
    else if(units<=400)
    amount=(100*2.25)+(units-200)*4.25;
    else if(units<=600)
    amount=(100*2.25)+(200*4.25)+(200*6.25)+(units-500)*9;
}
vid EBbill::displayEBbill()
{
    cout<<end1<<"**************************************"<<endl;
    cout<<"----------ELECTRICITY BILL------------------";
    cout<<end1<<"***************************************"<<endl;
    cout<<left<<setw(20)<<"customer_id"<<":"<<customer_id<<end1;
    cout<<left<<setw(20)<<"customername"<<":"<<customername<<endl;
    cout<<left<<setw(20)<<"address"<<":"<<address<<endl;
    cout<<left<<setw(20)<<"no.of units"<<":"<<units<<endl;
    cout<<left<<setw(20)<<"amount"<<":"<<amount<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"-----------------------THANKYOU-------------------"<<endl;
    cout<<"---------------------------------------------------"<<endl;
}
intmain()
{
    EBbill E1;
    E1.getcustomerdetails();
    E1.calculateEBbill();
    E1.displayEBbill();
    return 0;
}
