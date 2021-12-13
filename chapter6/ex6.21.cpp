#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;


class Base
{
    public:
        Base(int sz,char *bptr)
        {
            p = new char[sz];
            //strcpy_s(p,strlen(bptr)+1,bptr);
            strcpy(p,bptr);
            cout<<"Constant Base"<<endl;
        }
        virtual ~Base()
        {
            delete []p;
            cout<<"Destruct base\n";
        }
    private:
        char *p;
};

class Derive:public Base 
{
    public:
        Derive(int sz1,int sz2, char *bp,char *dptr):Base(sz1,bp)
        {
            pp = new char[sz2];
            //strcpy_s(pp,strlen(dptr)+1,dptr);
            strcpy(pp,dptr);
            cout<<"Construct Derive"<<endl;
        }
        ~Derive()
        {
            delete []pp;
            cout<<"Destruct Derive"<<endl;
        }
    private:
        char *pp;
};

int main()
{
    Base *px = new Derive(5,7,"Base","Derive");
    
    delete px;
    
    return 0;
}