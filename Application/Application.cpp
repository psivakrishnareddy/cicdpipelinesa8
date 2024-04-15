// Application.cpp : Defines the exported functions for the DLL.
//
#include <iostream>
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
        std::cout << "Returing value\n";
        return a + b;
    }
    
}
