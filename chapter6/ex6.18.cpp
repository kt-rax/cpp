#include <iostream>

using namespace std;

class Base 
{
    public:
        Base(){}
        virtual void vf()
        {   cout<<"Base::vf() called"<<endl;    }
};

class Son:public Base
{
    public:
        Son() { vf();   }
        void g() {  vf();}
};

class GrandSon:public Son
{
    public:
        GrandSon(){}
        void vf()
        {   cout<<"GrandSon:vf() called\n"; }
};

int main()
{
    GrandSon gs;
    gs.g();
    
    return 0;
}