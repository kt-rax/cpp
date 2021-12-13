#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ifile;
    ofstream ofile;
    
    ifile.open("C:\\Users/KT/C++/chapter7/fileIn.txt");
    //ifile.open("D:\\L/mybabc.txt");
    ofile.open("C:\\Users/KT/C++/chapter7/fileOut.txt");
    
    if(ifile.fail() || ofile.fail())
    {
        cerr<<"open file fail\n";
        return EXIT_FAILURE;
    }
    
    char ch;
    ch = ifile.get();
    while(!ifile.eof())
    {
        ofile.put(ch);
        ch = ifile.get();
    }
    
    ifile.close();
    ofile.close();
    
    return 0;
}