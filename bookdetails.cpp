#include<iostream>
using namespace std;
class books
{
    private:
    char ISBNO[50],Bookname[50],Author[50];
    int pages,Accno;
    float price;
    public:
    void getdetails()
    {
        cout<<"Enter ISBNO";
        cin>>ISBNO;
        cout<<"Bookname";
        cin>>Bookname;
        cout<<"Enter Author";
        cin>>Author;
        cout<<"Enter pages";
        cin>>pages;
        cout<<"Enter Accno";
        cin>>Accno;
        cout<<"Enter price";
        cin>>price;
    }
    void display()
    {
        cout<<"ISBNO:"<<ISBNO;
        cout<<"Bookname:"<<Bookname;
        cout<<"Author:"<<Author;
        cout<<"pages:"<<pages;
        cout<<"Accno:"<<Accno;
        cout<<"price:"<<price;
    }
};
int main()
{
    books b;
    b.display();
    b.getdetails();
}