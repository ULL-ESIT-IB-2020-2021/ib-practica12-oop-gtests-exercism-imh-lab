#include <iostream>
#include <string>
#include "complejo.cc"


class Complejo{
  public:
    int parte_real{0};
    int parte_imaginaria{0};
    
    Complejo Suma(Complejo complejo1, Complejo complejo2);
    Complejo Resta(Complejo complejo1, Complejo complejo2);
    void Print(Complejo resultado);
};
