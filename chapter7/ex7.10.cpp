#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class RMB
{
    public:
        RMB(double v =0.0)
        {
            yuan = unsigned(v);
            jf = unsigned((v-yuan)*100.0 + 0.5);
        }
        operator double()
        {
            return yuan + jf / 100.0;
        }
        void display(ostream& out)
        {
            out<<yuan<<'.'<<setfill('0')<<setw(2)<<jf<<setfill(' ');
        }
    protected:
        unsigned int yuan;
        unsigned int jf;
};
/*
ostream& operator <<(ostream& ot,RMB& d)
{
    d.display(ot);
    return ot;
}
*/
class Complex
{
    public:
        Complex(float r = 0, float i = 0)
        {
            real = r;
            imag = i;
        }
        friend ostream & operator<<(ostream & ,Complex &);
        friend istream & operator>>(istream & ,Complex &);
    private:
        float real,imag;
};

//ostream & operator<<( ostream & os,const Complex & c)
ostream & operator<<(ostream &output,Complex &obj)
{
    output<<obj.real;
    if(obj.imag > 0) output<< "+";
    if(obj.imag != 0) output<<obj.imag<<"i";
    
    return output;
}

istream & operator >>(istream &input,Complex &obj)
{
    cout<<"Input the real,imag of the complex:\n";
    input>>obj.real;
    input>>obj.imag;
    
    return input;
}

int main()
{
    RMB rmb(2.3);
    cout<<"Initially rmb = "<<rmb<<"\n";
    rmb = 2.0*rmb;
    cout<<"then rmb = "<<rmb<<"\n";
    
    Complex c1(2.3f,4.5f),c2(3.5f,2.8f),c3;
    cout<<"the value of c1 is: "<<c1<<'\n';
    cout<<"the value of c2 is: "<<c2<<"\n";
    cin>>c3;
    cout<<"the value of c3 is: "<<c3<<"\n";
    
    return 0;
}
    
