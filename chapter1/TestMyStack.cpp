//TestMyStack.cpp类的使用文件
#include "MyStack.h"
#include <iostream>
using namespace std;

int main()
{    
    MyStack st1,st2; //定义MyStack类对象st1和st2
    
    int x,i;
    for(i = 1;i<+5;i++)
    {
        st1.push(i);
        st2.push(i);
    }
    
    cout<<"堆栈st1的元素为：";
    st1.showElements();
    cout<<"堆栈st2的元素为：";
    st2.showElements();
    
    cout<<"\n-------------对堆栈st1进行操作-------------"<<endl;
    cout<<"   首先弹出3个元素，弹出的3个元素分别为：";
    
    for(i = 1;i <=3; i++)
    {
        st1.pop(x);
        cout<<x<<" ";
    }
    cout<<"\n 将20压入堆栈，堆栈st1的元素为：";
    st1.push(20);
    st1.showElements();
    
    cout<<"\n-----------------对堆栈st2进行操作-----------"<<endl;
    cout<<"   弹出堆栈中的所有元素，弹出的元素分别为：";
    while(st2.pop(x))
        cout<<x<<"  ";
    st2.showElements();
    
    return 0;
}