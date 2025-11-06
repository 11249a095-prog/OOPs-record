#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    public:
    student()
    {
        cout<<"Constructor is called!"<<endl;
    }
  ~student()
  {
    cout<<"Destructor is called!"<<endl;
  }  
  void display()
  {
    cout<<"Inside display function."<<endl;
  }
};
int main()
{
    cout<<"Creating object s1."<<endl;
    student s1;
    s1.display();
    cout<<"Exiting main........"<<endl;
    return 0;
}