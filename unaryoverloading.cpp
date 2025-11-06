#include <iostream>
using namespace std;
class Complex 
{
    int a, b;
    public:
    Complex()
    {

    }
    void getvalue()
    {
        cout << "Enter the two numbers: ";
        cin >> a >> b;
    }
    void operator++()
    {
        a=++a;
        b=++b;
    }
    void operator--() 
    {
        a=--a;
        b=--b;
    }
    void operator++(int)
    {
        a++;
        b++;
    }
    void operator--(int) 
    {
        a--;
        b--;
    }
    void display() {
        cout << a << " + " << b << "i" << endl;
    }
};
int main() 
{
    Complex obj;
    obj.getvalue();
    obj++;
    cout << "After incrementing complex number:\n";
    obj.display();
    obj--;
    cout << "After decrementing complex number:\n";
    obj.display();
    return 0;
}
