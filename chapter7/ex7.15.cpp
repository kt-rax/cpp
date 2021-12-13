#include <iostream>
#include <fstream>

using namespace std;

class Student
{
    public:
        char name[10];
        int num;
        int age;
        char addr[15];
        friend ostream & operator <<(ostream &out, Student &s);
        friend istream & operator >>(istream &in,Student &s);
};

ostream & operator <<(ostream &out, Student &s)
{
    out<<s.name<<" "<<s.num<<" "<<s.age<<" "<<s.addr<<"\n";
    return out;
}

istream & operator >>(istream &in,Student &s)
{   
    in>>s.name>>s.age>>s.addr;
    return in;
}

int main()
{
    ofstream ofile;
    ifstream ifile;
    ofile.open("C:\\Users/KT/C++/chapter7/s.txt");
    
    Student s;
    for (int i=1;i<=3;i++)
    {
        cout<<"input the "<<i<<"  student: name number addr"<<endl;
        cin>>s;
        cout<<"write in file"<<endl;
        ofile<<s;
    }
    
    ofile.close();
    
    cout<<"\n read file content"<<endl;
    ifile.open("C:\\Users/KT/C++/chapter7/s.txt");
    ifile>>s;
    while(!ifile.eof())
    {
        cout<<s;
        ifile>>s;
    }
    ifile.close();
    
    return 0;
}