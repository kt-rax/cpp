#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// 文件写
/*
int main()
{
    ofstream myf("d:\\mybabc.txt");
    char txt[255];
    while(1)
    {
        cin.getline(txt,255);
        if(strlen(txt) == 0)
            break;
        myf<<txt<<endl;
    }
    
    return 0;
}

*/

// 文件读 
int main()
{
    ifstream myf("d:\\L/mybabc.txt");
    if (myf.fail())
    {
        cout<<"file no exist!"<<endl;
        return 0;
    }
    
    char txt[255];
    myf>>txt;
    while(!myf.eof())
    {
        cout<<txt<<endl;
        myf>>txt;
    }
    
    return 0;
}