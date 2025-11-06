#include<iostream>
using namespace std;
class Student
{
    private:
    int marks;
    public:
    Student(int m)
     {
      marks=m;
     }
    friend void showMarks(Student s);
};
void showMarks(Student s)
{
    cout<<"Marks:"<<s.marks;
}
int main()
{
    Student s1(90);
    showMarks(s1);
    return 0;
}