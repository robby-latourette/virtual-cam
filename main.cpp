#include "header.h" // header in local directory
#include <iostream> // header in standard library

using namespace N;
using namespace std;

void my_class::do_something()
{
    cout << "Doing something!" << endl;
}

int main()
{
    my_class mc;
    mc.do_something();
    return 0;
}