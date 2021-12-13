#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    fstream f("1111.dat",ios::in|ios::out|ios::binary|ios::trunc);
    int i;
    for (i = 0;i < 20; i++)
        f.write((char*)&i,sizeof(int));
    streampos pos = f.tellp();
    
    for(i = 20;i<40;i++)
        f.write((char*)&i,sizeof(int));
    f.seekg(pos);
    f.read((char*)&i,sizeof(int));
    cout<<"the data stored is "<<i<<endl;
    f.seekp(0,ios::beg);
    for(i =100;i<140;i++)
        f.write((char*)&i,sizeof(int));
    f.seekg(pos);
    f.read((char*)&i,sizeof(int));
    cout<<"the data stored "<<i<<endl;
    f.close();
    
    return 0;
}