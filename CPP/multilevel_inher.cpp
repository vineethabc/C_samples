/* VIRTUAL BASE CLASSES (Diamond Problem)*/

#include<iostream>
using namespace std;

class A
{
	protected:
		int x;
	public:
		 void get_x(){
		cout<<"CLASS A fun"<<endl;	
              }
		
};


class B: public A // Making B1 a virtual base class
{
	protected:
		int y;
	public:
	   virtual void get_x(){
		cout<<"CLASS B fun"<<endl;	
              }
		
};

class C: public B // Making B1 a virtual base class
{
	protected:
		int z;
	public:
		void get_x(){
		cout<<"CLASS C fun"<<endl;	
              }
		
};



int main()
{
    A *a,aa;
    B *b,bb;
    C d;
    
    C *c;
    b=reinterpret_cast<B *>(&aa);
    b->get_x();
   // a=&d;
   // c=reinterpret_cast<C *>(a);//it wil give segfault
     // c->get_x();
   
   
	return 0;
}
