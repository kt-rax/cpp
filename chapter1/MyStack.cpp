//MyStack.cpp 类的实现文件
#include <iostream>
#include "MyStack.h"
using namespace std;

MyStack::MyStack(void)
{
    top = NULL;
}

MyStack::~MyStack(void)
{
}

bool MyStack::push(int i) //压栈成员函数push()定义
{
    Node *p = new Node;
    if (p == NULL)
    {
        cout <<"stack is overflow.\n";
        return false;
    }
    else 
    {
        p->content = i;
        p->next = top;
        top = p;
        return true;
    }
}

bool MyStack::pop(int &i) //弹栈成员函数pop()定义
{
    if(top == NULL)
    {
        cout<<"\n Stack is empty.\n";
        return false;
    }
    else 
    {
        Node *p = top;
        top = top->next;
        i = p->content;
        delete p;
        return true;
    }
}

void MyStack::showElements(void) //显示堆栈所有元素成员函数showElements()的定义
{
    Node *p = top;
    while(p)
    {
        cout<<p->content<<" ";
        p = p->next;
    }
    cout<<endl;
}
