#define MAXLENGTH 32
#include <iostream>
using namespace std;

class RealSet;
enum errcode
{noerror,overflow};

class IntSet
{
    public:
        IntSet()
        {
            card = 0;
        }
        errcode addElem(int);
        void print();
        void setToReal(RealSet *set);
    private:
        int elem[MAXLENGTH];
        int card;  
};

class RealSet
{
    public:
        RealSet()
        {
            card = 0;
        }
        errcode addElem(float);
        void print();
    private:
        float elem[MAXLENGTH];
        int card;
};

errcode IntSet::addElem(int elem1)
{
    for (int i =0;i < card; i++)
        if(elem[i] == elem1)
            return noerror;
    if(card < MAXLENGTH)
    {
        elem[card++] = elem1;
        return noerror;
    }
    else return overflow;
}

void IntSet::print()
{
    cout<< "{";
    for (int i = 0;i < card - 1; ++i)
        cout<<elem[i]<<",";
    if(card > 0)
        cout << elem[card - 1];
    cout <<"}\n";
}

void IntSet::setToReal(RealSet *set)
{
    for (int i = 0; i < card ;i++)
        set -> addElem((float)elem[i]);
}

errcode RealSet::addElem(float elem1)
{
    for (int i = 0 ; i < card; i++)
        if (elem[i] == elem1)
            return noerror;
    if (card < MAXLENGTH)
    {
        elem[card++] = elem1;
        return noerror;
    }
    else return overflow;
}

void RealSet::print()
{
    cout << "{";
    for (int i = 0; i < card -1; ++i)
        cout << elem[i]<<",";
    if(card > 0)
        cout << elem[card - 1];
    cout << "}\n";
}

int main()
{
    IntSet set1;
    RealSet *set2;
    set2 = new RealSet;
    set1.addElem(12);
    set1.addElem(278);
    set1.addElem(54);
    set1.addElem(459);
    set1.print();
    set1.setToReal(set2);
    set2 -> print();
    delete set2;
    
    return 0;
}
