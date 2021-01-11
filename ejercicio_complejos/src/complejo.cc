#include <iostream>
#include <vector>
#include "complejo.h"


Complejo Complejo::Suma(Complejo complejo1, Complejo complejo2){
  int real_1{complejo1.parte_real};
  int real_2{complejo2.parte_real};
  int resultado_real{0};
  int imaginaria_1{complejo1.parte_imaginaria};
  int imaginaria_2{complejo2.parte_imaginaria};
  int resultado_imaginario{0};
  resultado_real = (real_1 + real_2);
  resultado_imaginario = (imaginaria_1 + imaginaria_2);
  Complejo resultado{resultado_real, resultado_imaginario};
return resultado;
}
Complejo Complejo::Resta(Complejo complejo1, Complejo complejo2){
  int real_1{complejo1.parte_real};
  int real_2{complejo2.parte_real};
  int resultado_real{0};
  int imaginaria_1{complejo1.parte_imaginaria};
  int imaginaria_2{complejo2.parte_imaginaria};
  int resultado_imaginario{0};
  resultado_real = (real_1 - real_2);
  resultado_imaginario = (imaginaria_1 - imaginaria_2);
  Complejo resultado{resultado_real, resultado_imaginario};
  return resultado;
}
void Complejo::Print(Complejo resultado){
  int resultado_real = resultado.parte_real;
  int resultado_imaginario = resultado.parte_imaginaria;
  const char kImaginario{'i'};
  const char kMas{'+'};
  if(resultado_imaginario >= 0){
    std::cout << "El resultado de la operación es: " << resultado_real << kMas << resultado_imaginario << kImaginario <<std::endl;
  }
  else{ 
    std::cout << "El resultado de la operación es: " << resultado_real << resultado_imaginario << kImaginario <<std::endl;
  }
}