//---------------------------------------------------------------------------
//triangle.cpp
#include "triangle.h"
#include <math.h>


Trianglee::Trianglee()
{

    Base = 0;
    Altura = 0;
}

int Trianglee::Area(int Base, int Altura)
{
        return ((Base*Altura)/2);
}

int Trianglee::Perimetro(int Base, int Altura)
{
        double hipotenusa = sqrt((Base*Base)+(Altura*Altura));
        return (Base+Altura+hipotenusa);
}
