/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author IMH-ISMAEL MARTIN HERRERA
 * @brief Este programa calcula las sucesivas fechas a una previa introducida
 *        y las escribe en un fichero de salida. 
 * @see   https://github.com/ULL-ESIT-IB-2020-2021/IB-P11-Classes-CMake/blob/master/Classes-CMake.md
 * 
 * 
*/
#include <iostream>
#include <string>
#include "complejo.h"

int main (){
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo operacion;
  Complejo resultado;
  resultado = operacion.Suma(complejo1, complejo2);
  resultado.Print(resultado);
  resultado = operacion.Resta(complejo1, complejo2);
  resultado.Print(resultado);
}