#include <iostream>
#include <exception>

using namespace std;

int main()
{
    try 
    {
        exception theError;
        throw(theError);
    }
    catch(const exception &theError)
    {
        cout<<theError.what()<<endl;
    }
    
    try
    {
        logic_error theLogicError("Logi Error!");
        
        throw(theLogicError);
    }
    catch(const exception &theLogicError)
    {
        cout<<theLogicError.what()<<endl;
    }
    
    return 0;
}