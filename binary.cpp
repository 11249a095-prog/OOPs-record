#include<iostream>
using namespace std;
class Complex
{
    float real,imag;
    public:
    Complex(float r=0,float i=0)
    {
        real=r;
        imag=i;
    }
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1(3,3),c2(1,4);
    Complex c3=c1+c2;
    cout<<"First complex Number:";
    c1.display();
    cout<<"Second complex Number:";
    c2.display();
    cout<<"sum of two complex Number:";
    c3.display();
    return 0;
}