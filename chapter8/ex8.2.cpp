#include <iostream>

using namespace std;

double divide(double ,double);

int main()
{
    double f1 = 0.0,f2 = 0.0;
    try 
    {
        cout<<"f1/f2 = "<<divide(f1,f2)<<endl;
    }
    catch(double)
    {
        cout<<"被 0 除"<<endl;
    }
    return 0;
}

double divide(double x,double y)
{
    if(y == 0) throw 0.0;
    return x/y;
}