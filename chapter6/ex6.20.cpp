#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual float area() = 0;
};

class Triangle:public Shape 
{
    public:
        Triangle(float h,float w )
        {   height = h; width =w;   }
        float area()
        {   return height*width*0.5f;   }
    protected:
        float height,width;
};

class Rectangle:public Triangle
{   
    public:
        Rectangle(float h,float w):Triangle(h,w)
        {}
        float area()
        {   return height*width;    }
};

class Circle:public Shape
{
    private:
        float radius;
    public:
        Circle(float r)
        {   radius = r; }
        float area()
        {   return radius*radius*3.14f; }
};

float total(Shape *s[],int n)
{
    float sum = 0;
    for(int i =0;i<n ;i++)
        sum += s[i] -> area();
    return sum;
}

int main()
{
    Shape *s[4];
    s[0] = new Triangle(3,4);
    s[1] = new Rectangle(2,4);
    s[2] = new Circle(5);
    s[3] = new Circle(8);
    float sum = total(s,4);
    cout <<"sum = "<<sum<<endl;
    
    return 0;
}