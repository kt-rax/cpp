#include <iostream>

using namespace std;

int main()
{
    int i;
    char ch;
    cout<< "pls input a int and a char\n";
    try
    {
        cin>>i>>ch;
        if(i== 0) throw 0;
        if(ch == '!') throw '!';
    }
    catch(int)
    {
        cout<<"输入为 0"<<endl;
    }
    catch(char)
    {
        cout<<"input char !"<<endl;
    }
    
    cout<<"game over"<<endl;
    
    return 0;
}