#include <iostream>
#include <string>
#include <iostream>
#include <vector>

class Complejo{
  public:
    int parte_real{0};
    int parte_imaginaria{0};
    
    Complejo Suma(Complejo complejo1, Complejo complejo2);
    Complejo Resta(Complejo complejo1, Complejo complejo2);
    friend int operator*(const Complejo &complex1, const int &entero);
    void Print(Complejo resultado);
};

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
int operator*(const Complejo &complex1, const int &entero){
    int resultado;
    resultado = (complex1.parte_real * entero) + (complex1.parte_imaginaria * entero);
    return resultado;
}
int main (){
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo operacion;
  Complejo resultado;
  resultado = operacion.Suma(complejo1, complejo2);
  resultado.Print(resultado);
  resultado = operacion.Resta(complejo1, complejo2);
  resultado.Print(resultado);
  Complejo complejo3{1,2};
  int entero{3};
  int multiplicacion{complejo3 * entero};
  std::cout << multiplicacion;
  return 0;
}