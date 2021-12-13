#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 123;
    double y = -3.141543;
    cout<<"x = ";
    cout.width(10);
    cout<<x;
    cout<<"y = ";
    cout.width(10);
    cout<<y<<endl;
    cout.setf(ios::left);
    cout<<"x = ";
    cout.width(10);
    cout<<x;
    cout<<"y = ";
    cout.width(10);
    cout<<y<<endl;
    cout.fill('*');
    cout.precision(3);
    cout.setf(ios::showpos);
    cout<<"x =";
    cout.width(10);
    cout<<x;
    cout<<"y =";
    cout.width(10);
    cout<<y<<endl;
    cout.precision(2);
    cout.setf(ios::scientific);
    cout<<x<<' '<<y<<endl;
    
    return 0;
    
}