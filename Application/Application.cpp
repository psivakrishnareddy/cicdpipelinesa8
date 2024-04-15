// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"


CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        return 2 * a;
    }
    else
    {
        std::cout << "The result of Calc(" << a << ", " << b << ") is: " << a + b << std::endl; // Print the result
        return a + b;
    }
    
}
