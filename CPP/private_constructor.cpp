#include <iostream>
using namespace std;
class aTestClass
{
    aTestClass()//////////private constructor of this class
    {
        cout<<"Object created\n";
    }
    public:

    aTestClass* getAnObject()/////a public method create an object of this class and return the address of an object of that class
    {

        return (new aTestClass);

    }
};
int main()
{
    //aTestClass a;
    aTestClass *anObject=NULL;
    anObject=anObject->getAnObject();
//    delete anObject;
}
