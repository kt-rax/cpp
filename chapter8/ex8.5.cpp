#include <iostream>

using namespace std;

class OutOfBounds
{
    public:
        OutOfBounds(int a)
        {   i =a;   }
        int indexValue()
        {   return i;   }
    private:
        int i;
};

class Array
{
    public:
        int & operator[](int i)
        {
            if(i<0 || i>=10)
            throw OutOfBounds(i);
            return a[i];
        }
    private:
        int a[10];
};

int main()
{
    Array a;
    try
    {
        a[3] = 30;
        cout<<"a[3]"<<a[3]<<endl;
        a[100] = 1000;
        cout<<"a[1000]"<<a[1000]<<endl; 
    }
    catch(OutOfBounds error)
    {
        cout<<"Subscipt value "<<error.indexValue()<<"out of bounds.\n";
    }
    
    return 0;
}