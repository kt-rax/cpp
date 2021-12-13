#include <iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"the constructor of class A"<<endl;
            f();
        }
        virtual void f()
        {
            cout<<"A::f()"<<endl;
        }
        void g()
        {   cout<<"A::g()"<<endl;    }
        void h()
        {
           cout<<"A::h()"<<endl;   
           f();
           g();
        }
};

class B:public A
{
    public:
        void f()
        {   cout<<"B::f()"<<endl;   }
        void g()
        {   cout<<"B::g()"<<endl;    }
};

int main()
{
    A a;
    B b;
    A *p = &b;
    p -> f();
    p -> g();
    p -> h();
    cout<<"---------------------------"<<endl;
    a.f();
    a.g();
    a.h();
    cout<<"---------------------------"<<endl;
    b.f();
    b.g();
    b.h();
    
    return 0;
}