#include <iostream>
using namespace std;

#define OWNSIZE(type) (char *)(&type + 1) - (char *)(&type)
int main()
{
    int x;
    cout<<" size of int = "<<OWNSIZE(x)<<endl;

    
    char y;
    cout<<" size of char = "<<OWNSIZE(y)<<endl;
}
