#include<iostream>
using namespace std;
template<class T>
class Box
{
    private:
    T item;
    public:
    Box(T i)
    {
        item=i;
    }
    void show()
    {
        cout<<"item:"<<item<<endl;
    }
};
int main()
{
    Box<int>intBox(100);
    Box<string>strBox("Hello");
    intBox.show();
    strBox.show();
    return 0;
}