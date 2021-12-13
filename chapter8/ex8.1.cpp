#include <iostream>

using namespace std;

void aa()
{
    cout<<"这是由用户值得的错误处理函数"<<endl;
    exit(-1);
}

int main()
{
   set_terminate(aa);
   try{
       throw "error";
   }
   catch(int )
   {}
   
   return 0; 
}