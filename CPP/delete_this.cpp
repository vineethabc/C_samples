/*
Ideally delete operator should not be used for this pointer. However, if used, then following points must be considered.

delete operator works only for objects allocated using operator new (See http://geeksforgeeks.org/?p=8539). If the object is created using new, then we can do delete this, otherwise behavior is undefined.
2) Once delete this is done, any member of the deleted object should not be accessed after deletion
*/
#include<iostream>

class A
{
  public:
    void fun()
    {
        delete this;
    }
};
 
int main()
{
  /* Following is Valid */
  A *ptr = new A;
  ptr->fun();
  ptr = NULL // make ptr NULL to make sure that things are not accessed using ptr. 
 
 
  /* And following is Invalid: Undefined Behavior */
  A a;
  a.fun();
 
  getchar();
  return 0;
}
