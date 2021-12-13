#include <iostream>

using namespace std;

class Fairy_tale{
    public:
        virtual void act1()
        {
            cout<<"Princess meet frog.\n";
            act2();
        }
        void act2()
        {
            cout<<"Princess kiss frog.\n";
            act3();
        }
        
        virtual void act3()
        {
            cout<<"Frog turns into princes.\n";
            act4();
        }
        virtual void act4()
        {
            cout<<"They live happy ever after. \n";
            act5();
        }
        virtual void act5()
        {
            cout<<"The end.\n";
        }
};

class Unhappy_tale:public Fairy_tale{
    void act3()
    {
        cout<<"Frog stays with anothr frog\n";
        act4();
    }
    
    void act4()
    {
        cout<<"princess runs away in disgust.\n";
        act5();
    }
    void act5()
    {
        cout<<"The not -so - happy end.\n";
    }
};

int main()
{
    char ch;
    Fairy_tale *tale;
    cout<<"which tale would you like to hear(f/u):";
    cin>>ch;
    if (ch=='f')
        tale = new Fairy_tale;
    else
        tale = new Unhappy_tale;
    tale -> act1();
    delete tale;
    
    return 0;
}