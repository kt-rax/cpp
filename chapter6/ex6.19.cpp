#include <iostream>
using namespace std;

class Base{
    public:
        virtual void print()
        {   cout<<"class Base! \n";}
};

class Son:public Base 
{
    public:
        virtual void print(){}
};

class GrandSon:public Son
{
    public:
        virtual void print()
        {   cout<<"class GrandSon! \n"; }
};

void show(Base *p)
{
    p->print();
}

int main()
{
    Base *pBase = new Base;
    Son *pSon = new Son;
    GrandSon *pGrandSon = new GrandSon;
    show(pBase);
    show(pSon);
    show(pGrandSon);
    
    return 0;
}