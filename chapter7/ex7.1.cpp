#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x=30,y=300,z=1024;
    cout<<"Decimal:\t"<<x<<'\t'<<y<<'\t'<<z<<endl;
    cout<<"Decimal:\t"<<x<<"\t"<<y<<'\t'<<z<<endl;
    cout<<"Octal:\t\t"<<oct<<x<<'\t'<<y<<'\t'<<z<<endl;
    cout<<"Hexadecimal:\t"<<hex<<x<<'\t'<<y<<'\t'<<z<<endl;
    cout<<setiosflags(ios::uppercase);
    cout<<"Hexadecimal:\t"<<x<<'\t'<<y<<'\t'<<z<<endl;
    cout<<resetiosflags(ios::uppercase);
    cout<<"Hexadecimal:\t"<<x<<'\t'<<y<<'\t'<<z<<endl;
    cout<<"Decimal:\t"<<dec<<x<<'\t'<<y<<'\t'<<z<<endl;
    //setw设置输出宽度 
    int a = 10,b = 1000;
    cout<<"a = "<<setw(5)<<a<<"\n";
    cout<<"b = "<<setw(5)<<b<<endl;
    //用setfill控制符设置填充字符 
    cout<<setfill('*')<<setw(2)<<"OK"<<endl<<setw(3)<<"OK"<<endl<<setw(4)<<"OK"<<endl;
    cout<<setfill(' ');
    cout<<setw(5)<<"OK"<<endl;
    //浮点显示
    cout<<"double show \n";
    double test = 22.0/7;
    cout<<test<<endl;
    cout<<setprecision(0)<<test<<endl<<setprecision(1)<<test<<endl<<setprecision(2)<<test<<endl<<setprecision(3)<<test<<endl<<setprecision(4)<<test<<endl;
    cout<<"-------------"<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(0)<<test<<endl
        <<setprecision(4)<<test<<endl;
    cout<<resetiosflags(ios::fixed);
    cout<<setiosflags(ios::scientific)<<test<<endl;
    cout<<resetiosflags(ios::scientific);
    cout<<setprecision(6);
    
    //对齐输出
    cout<<right<<setw(5)<<-1<<setw(5)<<2<<setw(5)<<3<<endl;
    cout<<left<<setw(5)<<-1<<setw(5)<<2<<setw(5)<<3<<endl;
    cout<<internal<<setw(5)<<-1<<setw(5)<<2<<setw(5)<<3<<endl;
    //setiosflags(flag)对齐
    cout<<setiosflags(ios::right)<<setw(5)<<-1<<setw(5)<<2<<setw(5)<<3<<endl;
    cout<<setiosflags(ios::left)<<setw(5)<<-1<<setw(5)<<2<<setw(5)<<3<<endl;
    cout<<setiosflags(ios::internal)<<setw(5)<<-1<<setw(5)<<2<<setw(5)<<3<<endl;
    //强制显示小数点
    cout<<"====================="<<endl;
    double xx = 66 ,yy = -3.246;
    cout<<"xx = "<<xx<<'\t\t'<<"yy = "<<yy<<endl;
    cout<<"xx = "<<xx<<"\t\t"<<"yy = "<<yy<<endl;
    cout<<setiosflags(ios::showpoint);
    cout<<"xx = "<<xx<<'\t'<<"yy = "<<yy<<endl;
    //强制显示数值符合
    cout<<xx<<'\t'<<y<<endl;
    cout<<setiosflags(ios::showpos);
    cout<<xx<<'\t'<<yy<<endl;
    //成员函数
    /*
    string firstname;
    string lastname;
    getline(cin,firstname);
    getline(cin,lastname);
    */
    char str[250];
    cout<<"pls input a string:\n";
    cin.getline(str,sizeof(str),',');
    cout<<"input string is :"<<str<<endl;
    cin.getline(str,sizeof(str),',');
    cout<<"input string is :"<<str<<endl;
    
    return 0;
}

    