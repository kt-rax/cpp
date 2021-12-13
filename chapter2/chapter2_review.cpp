#include <iostream>
using namespace std;
const float PI = 3.1515926;

float square(float r)
{   
    return PI * r * r;
}

float square(float high,float length = 0)
{
    return high*length;
}

float (*fs)(float,float = 0);


int main()
{
    //1.
    int *p = new int[3];
    for (int i=0;i<3;i++)
        p[i] = i;
    cout<<"p[0]="<<p[0]<<"  p[1]="<<p[1]<<"  p[2]="<<p[2]<<"\n";
    
    p[1]++;
    cout<<"p[0]="<<p[0]<<"  p[1]="<<p[1]<<"  p[2]="<<p[2]<<"\n";
    
    delete p;
    cout<<"p[0]="<<p[0]<<"  p[1]="<<p[1]<<"  p[2]="<<p[2]<<"\n";
    
    
    //2.
    int i = 0,&l =  i, &k = l;
    i = ++l -k;
    cout << "i = "<<i<<endl;
    
    fs = &square;
    cout<<"The circle's square is "<<fs(0.1,0.1)<<"\n";
    
    
    return 0;
    
    
}

