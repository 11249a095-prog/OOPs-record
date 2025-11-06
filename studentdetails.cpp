#include<iostream>
using namespace std;
class student
{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdata();
    void calculate();
    void print();
};
void student::getdata()
{
    cout<<"Enter rollno";
    cin>>rollno;
    cout<<"Enter name";
    cin>>name;
    cout<<"Enter 3 marks";
    cin>>m1;
    cin>>m2;
    cin>>m3;
}
void student::calculate()
{
    total=m1+m2+m3;
    avg=total/3;
}
void student::print()
{
    cout<<"\n Name:"<<name;
    cout<<"\n rollno:"<<rollno;
    cout<<"\n Mark1:"<<m1;
    cout<<"\n Mark2:"<<m2;
    cout<<"\n Mark3:"<<m3;
    cout<<"\n Total:"<<total;
    cout<<"\n Avg:"<<avg;
}
int main()
{
    student s;
    s.getdata();
    s.calculate();
    s.print();
}