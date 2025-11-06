#include<iostream>
#include<conio.h>
using namespace std;
class time1
{
    private:
    int hour,min,sec;
    public:
    time1()
    {
        hour=0;
        min=0;
        sec=0;
    }
    time1(int h,int m,int s)
    {
        if(h>0&&h<23&&m>0&&m<=59&&s>0&&s<=59)
        {
            hour=h;
            min=m;
            sec=s;
        }
        else
        cout<<"invalid time";
    }
    int operator==(time1 t3)
    {
        return(hour==t3.hour&&min==t3.min&&sec==t3.sec);
    }
};
int main()
{
    time1 t1(7,11,30);
    time1 t2(3,30,41);
    if(t1==t2)
    cout<<"clock shows same time"<<endl;
    else
    cout<<"clock shows different time"<<endl;
}

