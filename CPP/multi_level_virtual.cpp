    /*

     * C++ Program to Illustrate Multilevel Inheritance

     * with Method Overriding
         output:
              $ a.out
		Base.Value() = 1
		Derived.Value() = 2
		MostDerived.Value() = 3
     */
            
    #include <iostream>

     

    class Base {

        int i;

        public:

            Base(int i = 0): i(i) { }

            virtual int val() const { return i; }

            virtual ~Base() { }

    };

     

    class Derived : public Base

    {

        int i;

        public:

            Derived(int i = 0): i(i) { }

            virtual int val() const { return i; }

            virtual ~Derived() { }

    };

     

    class MostDerived : public Derived 

    {

        int i;

        public:

            MostDerived(int i = 0): i(i) { }

            virtual int val() const { return i; }

            virtual ~MostDerived() { }

    };

     

    int main()

    {

        Base * B = new Base(1);

        Base * D = new Derived(2);

        Base * MD = new MostDerived(3);

     

        std::cout << "Base.Value() = " << B->val() << std::endl;

        std::cout << "Derived.Value() = " << D->val() << std::endl;

        std::cout << "MostDerived.Value() = " << MD->val() << std::endl;

    }
