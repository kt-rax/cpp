#include <iostream>

using namespace std;

void h()
{
    throw 0;
}

void g()
{
    try
    {
        h();
    }
    catch(int)
    {
        cout<<"catch in g function"<<endl;
        throw;
    }
}

int main()
{
    try
    {
        g();
    }
    catch(int)
    {
        cout<<"catch in main function"<<endl;
    }
    
    return 0;
}