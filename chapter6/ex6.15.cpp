#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void f1()
        {   cout<<"f1 function of Base"<<endl;  }
        virtual void f2()
        {   cout<<"f2 function of Base"<<endl;  }
        virtual void f3()
        {   cout<<"f3 function of Base"<<endl;  }
        void f4()
        {   cout<<"f4 function of Base"<<endl;  }
};

class Derive: public Base
{
    void f1()
    {   cout<<"f1 function of Derive !"<<endl;  }
    void f2()
    {   cout<<"f2 function of Derive !"<<endl;  }
    // int f3()
    //{    cout<<"f3 function of Derive !"<<endl;  }
    void f4()
    {   cout<<"f4 function of Derive"<<endl;    }
    
};

int main()
{
    Base obj1,*ptr;
    Derive obj2;
    ptr = &obj1;
    ptr -> f1();
    ptr -> f2();
    ptr -> f3();
    ptr = &obj2;
    ptr -> f1();
    ptr -> f2();
    ptr -> f4();
    
    return 0;
}