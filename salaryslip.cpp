#include<iostream>
using namespace std;
class payslip
{
    private:
    int Emp_no,basic_pay,Da,hra,epf,Gpay,tot_ded,net_pay;
    string name,Dept,design,bank_no,pan_no;
    public:
    void getdetails()
    {
        cout<<"Enter Employee number:";
        cin>>Emp_no;
        cout<<"Enter Employee Name:";
        cin>>name;
        cout<<"Enter Employee Deparment:";
        cin>>dept;
        cout<<" Enter Desgination";
        cin>>design;
        cout<<" Enter Bank account number";
        cin>>bank_no;
        cout<<"Enter Basic pay";
        cin>>basic_pay;
        cout<<"Enter pan number";
        cin>>pan_no;
    }
    void calculate()
    {
        da=basic_pay/100*80;
        hra=basic_pay/100*10;
        gpy=basic_pay+da+hra;
        epf=(basic_pay+da)/100*12;
        p_tax=(basic_pay)/100*2;
        total_ded=epf+p_tax;
        net_pay=gpy-tot_ded;
    }
    void print()
    {
    cout<<"\n Employee no:"<<Emp_no;
    cout<<"\n Employee name:"<<Emp_name;
    cout<<"\n Desigination:"<<design;
    cout<<"\n Bank account number:"<<bank_no;
    cout<<"\n Basic pay:"<<basic_pay;
    cout<<"\n Pan number:"<<pan_no;
    cout<<"\n da:"<<da;
    cout<<"\n hra:"<<hra;
    cout<<"\n gpy:"<<gpy;
    cout<<"\n epf:"<<epf;
    cout<<"\n p tax:"<<ptax;
    cout<<"\n total deducation:"<<tot_ded;
    cout<<"\n Net pay:"<<net_pay;
    }
};
int main()
{
    payslip p;
    p.getdetails();
    p.calculate();
    p.print();
}