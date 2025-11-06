#include<iostream>
using namespace std;
class EBbill
{
    private:
    int customer_id,units;
    char customername[50],address[50];
    float amount;
    public:
    void get_customerdetails();
    void calculateEBbill();
    void displayEBbill();
};
void EBbill :: get_customerdetails()
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
void EBbill :: calculateEBbill()
{
    if(units<=100)
    amount=0;
    else if(units<=200)
    amount=(units-100)*2.25;
    else if(units<=400)
    amount=(100*2.25)+(units-200)*4.25;
    else if(units<=600)
    amount=(100*2.25)+(200*4.25)+(units-400)*6.25;
    else
    amount=(100*2.25)+(200*4.25)+(200*6.25)+(units-500)*9;
}
void EBbill::displayEBbill()
{
    cout<<"customer_id"<<":"<<customer_id<<endl;
    cout<<"customername"<<":"<<customername<<endl;
    cout<<"address"<<":"<<address<<endl;
    cout<<"no.of units"<<":"<<units<<endl;
    cout<<"amount"<<":"<<amount<<endl;
}
int main()
{
    EBbill E1;
    E1.get_customerdetails();
    E1.calculateEBbill();
    E1.displayEBbill();
}
