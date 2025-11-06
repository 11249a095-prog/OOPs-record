#include<iostream>
using namespace std;
class hour;
{
private:
int hours,minutes;
public:
void gettime();
void addtime(Time T1,Time T2);
void display();
void Time::gettime()
}
{
    cout<<"Enter the hours:";
    cin>>hours;
    cout<<"Enter the minutes:";
    cin>>minutes;
}
void Time::addtime(Time T1,Time T2)
{
    minutes= T1minutes+T2minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+T1hours+T2hours;
}
int main()
{
    Time T1,T2,T3;
    T1.gettime();
    x2.gettime();
    x3.addtime(T1,T2);
    x1.dispalytime();
    x2.dispalytime();
    x3.display();
}