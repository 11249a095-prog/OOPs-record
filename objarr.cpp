#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    void setid(int i)(id=i);
    void show()
    {
        cout<<"ID:"<<id<<endl;
    }
};
int main()
{
    student*p=new student[3];
    for(int i=0;i<3;i++)
    {
        p[1].setid(i+1);
    }
    for (int i=0;i<3;i++)
    {
        p[i].show();
    }
    delete[]p;
    return 0;
}