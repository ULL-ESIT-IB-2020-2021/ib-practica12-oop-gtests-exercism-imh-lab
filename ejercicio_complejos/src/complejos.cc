/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author IMH-ISMAEL MARTIN HERRERA
 * @brief Este programa calcula realiza las operaciones suma y resta con 
 *        números de complejos. 
 * @see   https://github.com/ULL-ESIT-IB-2020-2021/IB-P12-Classes-GTests-Exercism/blob/master/Classes-GTests-Exercism.md
 * 
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