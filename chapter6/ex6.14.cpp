#include <iostream>
using namespace std;

class Base
{
    public: 
        void who()
        {   
            cout<<"this is the class of Base"<<endl;
        }
};

class Derive1:public Base
{
    public:
        void who()
        {
            cout<<"this is the class of Derive1 !"<<endl;
        }
};

class Derive2:public Base
{
    public:
        void who()
        {
            cout<<"this is the class of Derived2 !"<<endl;
        }
};

int main()
{
    Base obj1,*p;
    Derive1 obj2;
    Derive2 obj3;
    p = &obj1;
    p -> who();
    p = &obj2;
    p -> who();
    ((Derive1*)p) -> who();
    p = &obj3;
    p -> who();
    ((Derive2*)p) -> who();
    obj2.who();
    obj3.who();
    
    return 0;
}