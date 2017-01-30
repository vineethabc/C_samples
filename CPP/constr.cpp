#include <iostream>
using namespace std;
class base
{

public:
    base(){cout<<"Base Constructor Called\n";}
    ~base(){cout<<"Base Destructor called\n";}

};
class derived1:public base
{

public:
    derived1(){cout<<"Derived constructor called\n";}
    ~derived1(){cout<<"Derived destructor called\n";}

};
int main()
{

   // base* b;
   // b=new derived1;
   
   // delete b;
   derived1 *d1=new derived1;
   delete d1;
 
}
