#include <iostream>
using namespace std;

// Base class
class base
{
    public:
        // Virtual function must be override in derived class
        virtual void print()
        {
            // Printing message
            cout<<" base class"<<endl;
        }
};

class derived : public base
{
    public:
        // Override the print
        void print()
        {
            cout<< " derived class"<<endl;
        }

        // show member function
        void show()
        {
            cout<< " show member function from derived class"<<endl;
        }
};

// validate function 
// Accept argument as reference of object
// If you pass object of any class type either base or derived 
// obj will point to that class,
// This is the way we can avoid object slicing
void validate (base &obj)
{
    obj.print();
}

int main()
{
    base b;
    validate(b); // output : base class

    derived d;
    validate(d); // output : derived class

}