#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

class Person{
    public:
        Person(char *,int,char *,char *);
        virtual void print();
        virtual void insert(){};
        friend class List;
    protected:
        char name[30];
        int age;
        char add[40];
        char tele[20];
        static Person *ptr;
        Person *next;
};

class Student:public Person{
    public:
        Student(char *,int ,char *,char *,int ,float);
        void print();
        void insert();
    private:
        friend class List;
        int level;
        float grade_point_average;
};

class Teacher:public Person{
    public:
        Teacher(char *,int,char *,char *,float);
        void print();
        void insert();
    private:
        friend class List;
        float salary;
};

class Staff:public Person{
    public:
        Staff(char *, int,char *,char *,float);
        void print();
        void insert();
    private:
        friend class List;
        float hourly_wages;
};

class List{
    public:
        List(){root = 0;}
        void insert_Person(Person * node);
        void remove(char * name);
        void print_List();
    private:
        Person *root;
};

Person::Person(char *name,int age,char *add,char *tele)
{
    strcpy(Person::name,name);
    strcpy(Person::add,add);
    strcpy(Person::tele,tele);
    Person::age = age;
    next = 0;
}

void Person::print()
{
    cout<<"\n name:"<<name<<"\n";
    cout<<"age: "<<age<<"\n";
    cout<<"address:"<<add<<"\n";
    cout<<"telephone number:"<<tele<<"\n";
}

Student::Student(char *name,int age,char *add,char *tele,int level, float grade_point_average):Person(name,age,add,tele)
{
    Student::level = level;
    Student::grade_point_average = grade_point_average;
}

void Student::print()
{
    Person::print();
    cout<<"grade point average: "<<grade_point_average<<endl;
    cout<<"level"<<level<<endl;
}

void Student::insert()
{
    ptr = new Student(name,age,add,tele,level,grade_point_average);
}

Teacher::Teacher(char *name,int age,char *add,char *tele,float salary):Person(name,age,add,tele)
{
    Teacher::salary = salary;
}

void Teacher::print()
{
    Person::print();
    cout<<"salary: "<<salary<<"\n";
}

void Teacher::insert()
{
    ptr = new Teacher(name,age,add,tele,salary);
}

Staff::Staff(char *name,int age,char *add, char *tele, float hourly_wages):Person(name,age,add,tele)
{
    Staff::hourly_wages = hourly_wages;
}

void Staff::print()
{
    Person::print();
    cout<<"hourly_wages: "<<hourly_wages<<"\n";
}

void Staff::insert()
{
    ptr = new Staff(name,age,add,tele,hourly_wages);
}

void List::insert_Person(Person *node)
{
    char key[20];
    strcpy(key,node->name);
    Person *curr_node = root;
    Person *previous = 0;
    while(curr_node!=0 && strcmp(curr_node -> name,key) < 0)
    {
        previous = curr_node;
        curr_node = curr_node -> next;
    }
    node -> insert();
    node -> ptr ->next = curr_node;
    if (previous == 0)
        root = node -> ptr;
    else
        previous -> next = node -> ptr;
}

void List::remove(char *name)
{
    Person *curr_node = root;
    Person *previous = 0;
    while(curr_node != 0 && strcmp(curr_node -> name,name)!=0)
    {
        previous = curr_node;
        curr_node = curr_node -> next;
    }
    if (curr_node != 0 && previous == 0)
    {
        root = curr_node -> next;
        delete curr_node;
    }
    else if(curr_node!=0 && previous!=0)
    {
        previous -> next = curr_node -> next;
        delete curr_node;
    }
}

void List::print_List()
{
    Person * cur = root;
    if(cur == 0)
    {
        cout<<"链表为空"<<endl;
        return;
    }
    while(cur!=0)
    {
        cur-> print();
        cur = cur -> next;
    }
}

Person *Person::ptr = 0;

int main()
{
    List people;
    Student stu("wangchong",20,"shanghai","021-55578628",3,2);
    Teacher tea("lili",43,"beijing","010-63716193",563);
    Staff sta("chengling",42,"qingdao","0532-65109037",20);
    people.insert_Person(&stu);
    people.insert_Person(&tea);
    people.insert_Person(&sta);
    people.print_List();
    cout<<endl<<"删除2个节点后的链表节点信息为："<<endl;
    people.remove("chengling");
    people.remove("lili");
    people.print_List();
    cout<<endl<<"删除最后一个节点"<<endl;
    people.remove("wangchong");
    people.print_List();
    
    return 0;
}



