//MyStack.h类的定义文件 
#pragma once

class MyStack
{
    public:
        MyStack();
        ~MyStack();
        bool push(int i);
        bool pop(int &i);
        void showElements(void);
    private:
        struct Node{
            int content;
            Node *next;
        }*top;
};

