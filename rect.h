//---------------------------------------------------------------------------

#ifndef rectH
#define rectH

//rect.h
#include <string>
#include <sstream>
#include <iomanip>
#include <locale>


class Retangle {

  public:
        Retangle();
        int Area(int,int);
        int Perimetro(int,int);
        void Printer(char*,int,int);
       
  private:
        int Base, Altura;
};

//---------------------------------------------------------------------------
#endif

