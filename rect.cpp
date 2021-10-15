//---------------------------------------------------------------------------
//triangle.cpp
#include "rect.h"
#include <sstream>
#include <iomanip>
#include <locale>
#include <string> // this should be already included in <sstream>
#include <stdio.h>


Retangle::Retangle()
{

    Base = 0;
    Altura = 0;
}

int Retangle::Area(int Base, int Altura)
{
        return ((Base*Altura));
}

int Retangle::Perimetro(int Base, int Altura)
{
        return ((Base*2)+(Altura*2));
}

void Retangle::Printer(char * name, int Area, int Perimetro)
{
    printf("Area: %d\tPerimetro: %d\n", Area, Perimetro);
}
