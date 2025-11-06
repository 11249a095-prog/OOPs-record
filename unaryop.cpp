 #include<iostream>
 using namespace std;
 class Complex
 {
    int a,b;
    public:
    Complex()
    {

    }
    void getvalue()
    {
        cout<<"Enter the Two numbers:";
        cin>>a>>b;
    }
    complex operator ++()
    {
        a=++a;
        b=++b;
    }
     complex operator --()
    {
        a=--a;
        b=--b;
    }
    void display()
    {
        cout<<a<<" +\t"<<b<<"i"<<endl;
    }
};
    int main()
    {
        Complex obj;
        obj.getvalue();
        ++obj;
        cout<<"Increment complex number\n";
        obj.display();
        --obj;
        cout<<"Decrement complex number\n";
        obj.display();
        return 0;
    }
