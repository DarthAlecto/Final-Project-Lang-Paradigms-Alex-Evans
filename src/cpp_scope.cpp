#include <iostream>
using namespace std;

int x = 1;

void printX()
{
    cout << "x = " << x << endl;
}

//shadowing

void testScopes()
{
    int x = 2; // This x shadows the global x
    cout << "inside testscopes, x = " << x << endl;

    {
        int x = 3; // This x shadows the x in testScopes
        cout << "inside inner block, x = " << x << endl;
    }

    cout << "back in testscopes, x = " << x << endl;
}

//static and/or dynamic
void staticDynamicScoping()
{
    int x = 10;
    printX();
}

int main()
{
    cout << "C++ Example:" << endl;
    printX();
    testScopes();
    staticDynamicScoping();

    return 0;
}
