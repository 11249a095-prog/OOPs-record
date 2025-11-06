#include<iostream>
using namespace std;
template <class T,class U>
void multiply(T a, U b)
{
    cout<< "\nMultiplication ="<<a * b <<endl;
}
int main()
{
    int a,b;
    float x,y;
    cout <<"\n Enter two integer data:"<<endl;
    cin >> a >> b;
    cout <<"Enter two float data:"<<endl;
    cin >> x >>y;
    multiply(a,b);
    multiply(x,y);
    multiply(a,x);
    return 0;
}