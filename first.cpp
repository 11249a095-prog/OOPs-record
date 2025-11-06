#include<iostream>
using namespace std;
int area(int side);
int area(int length,int breadth);
double  area(double radius);
int main()
{
    cout<<"Area of Square(side=5):";
    cout<<area(5);
    cout<<"Area of Rectangle(10*6):";
    cout<<area(10,6);
    cout<<"Area of circle(radius=5.5):";
    cout<<area(5.50);
    return 0;
}


int area(int side)
{
    return side*side;
}

int area(int length,int breadth)
{
    return length*breadth;
}
double area(double radius)
{
    return 3.14*radius*radius;
}
