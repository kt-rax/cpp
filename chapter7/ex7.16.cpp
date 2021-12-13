#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void sort(int [],int);

int main()
{
    fstream dat,out;
    int i,a[20],b[20];
    
    dat.open("C:\\Users/KT/C++/chapter7/file.dat",ios::binary|ios::out|ios::in|ios::app);
    if(!dat)
    {
        cout<<("cannot open file\n");
        exit(0);
    }
    for(i = 0;i < 20; i++)
    {
        a[i] = rand();
        dat.write((char*)&a[i],sizeof(int));
    }
    dat.seekg(0);
    for (i = 0;i< 20;i++)
    {
        dat.read((char *)&b[i],sizeof(int));
    }
    sort(b,20);
    out.open("file.out",ios::out);
    if(!out)
    {
        cout<<"cannot open file\n";
        exit(0);
    }
    for(i = 0;i <20;i++)
    {
        out<<b[i]<<' ';
    }
    out<<'\n';
    for(i = 0;i<20;i++)
    {
        cout<<setw(10)<<b[i];
        if((i+1)%5 == 0) cout<<endl;
    }
    out.close();
    dat.close();
    
    return 0;
}

void sort(int x[],int m)
{
    int i,j,k,t;
    for (i =0;i<m-1;i++)
    {
        k = i;
        for(j =i+1;j<m;j++)
            if(x[j]<x[k]) k =j;
        
        if(k!=i)
        {
          t= x[i];x[i]=x[k];x[k]=t;
        }
    }
}