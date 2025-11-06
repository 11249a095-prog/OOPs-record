#include<iostream>
using namespace std;
template <typename T>
T sum(T n1,T n2)
{
    T rs;
    rs = n1 + n2;
    return rs;
}
int main()
{
    int A=10, B=20, c;
    long i=11, j=22, k;
    c = sum(A, B);
    cout<<"\nThe sum of interger value:"<< c;
    k = sum(i,j);
    cout<<"\nThe sum of long values:"<< k;
    return 0;
}