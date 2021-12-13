#define MAXLENGTH 32
#include <iostream>
using namespace std;

class IntSet;
enum errcode 
{ noerr,overflow};


class RealSet
{
    public:
        RealSet()
        {
            card = 0;
        }    
        errcode addElem(float);
        void print();
        friend void setToReal(IntSet *,RealSet *);
    private:
        float elem[MAXLENGTH];
        int card;
};


class IntSet
{
    public:
        IntSet()
        {
            card = 0;
        }
        errcode addElem(int);
        void print();
        friend void setToReal(IntSet *,RealSet *);
    private:
        int elem[MAXLENGTH];
        int card;
};



errcode IntSet::addElem(int elem1)
{
    for( int i =0 ;i < card; i++)
        if (elem[i] == elem1)
            return noerr;
        if (card < MAXLENGTH)
            {
                elem[card ++] = elem1;
                return noerr;
            }
        else return overflow;
}

void IntSet::print()
{
    cout<<"{";
    for (int i = 0; i< card;++i)
        cout << elem[i]<<",";
    if (card > 0)
        cout<<elem[card - 1];
    cout<<"}\n";
}

errcode RealSet::addElem(float elem1)
{
    for (int i =0 ;i < card ; i++)
        if (elem[i] == elem1)
            return noerr;
    if (card < MAXLENGTH)
    {
        elem[card++] = elem1;
        return noerr; 
    }
    else return overflow;
}

void RealSet::print()
{
    cout<<"{";
    for (int i =0;i< card-1; ++i)
        cout << elem[i]<<",";
    if(card > 0)
        cout <<elem[card -1];
    cout <<"}\n";
}

void setToReal(IntSet *set1, RealSet *set2)
{
    set2 -> card = set1 -> card;
    for (int i= 0; i< set1->card; i++)
        set2 -> elem[i] = (float)set1 -> elem[i];
}

int main()
{
    IntSet *set1;
    RealSet *set2;
    set1 = new IntSet;
    set2 = new RealSet;
    set1->addElem(12);
    set1->addElem(278);
    set1->addElem(54);
    set1->addElem(459);
    set1->print();
    setToReal(set1,set2);
    set2->print();
    delete set1;
    delete set2;
    return 0;
}