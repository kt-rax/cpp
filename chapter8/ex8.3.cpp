#include <iostream>
using namespace std;

void detail (int k)
{
    cout<<"Start of detail function.\n";
    if(k == 0) throw 123;
    cout<<"Eno of detail function.\n";
}

void compute(int i)
{
    cout<<"start of compute function.\n";
    detail(i);
    cout<<"End of compute function.\n";
}

int main()
{
    int x;
    cout<<"Enter x(0 will throw an exception): ";
    cin>>x;
    try
    {
        compute(x);
    }
    catch(int i)
    {
        cout<<"Exception : "<<i<<endl;
    }
    cout<<"The end."<<endl;
    
    return 0;
}