#include<iostream>  //pure virtual function
using namespace std;
class Base 
{
    public:
    virtual  void display()=0;
};
class Derived1:public Base
{
    public:
    void display()
    {
    cout<<"we are in derived clas"<<endl;
    }
};
class Derived2:public Base
{
    public:
    void display()
    {
        cout<<"we are in derived class";
    }
};
int main()
{
    Base *bptr;
    Derived1 ob1;
    Derived2 ob2;
    bptr=&ob1;
    bptr->display();
    bptr=&ob2;
    bptr->display();
    return 0;
}
    

