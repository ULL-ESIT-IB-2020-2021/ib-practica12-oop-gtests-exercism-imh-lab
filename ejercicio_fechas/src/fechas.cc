/** 
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author IMH-ISMAEL MARTIN HERRERA
 * @brief Este programa ordenada las fechas en orden cronológico de extraídas de un fichero y las
 *        reescibre ordenadas en otro fichero. 
 * @see   https://github.com/ULL-ESIT-IB-2020-2021/IB-P12-Classes-GTests-Exercism/blob/master/Classes-GTests-Exercism.md
 * 
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "fecha.h"

int main (int argc, char* argv[]){
  Usage(argc, argv);
  std::string fichero_entrada{argv[1]};
  std::string fichero_salida{argv[2]};
  std::vector <Fechas> fechas_ordenar;
  std::ifstream input(fichero_entrada, std::ifstream::in);
  std::string line;
  while (std::getline(input, line)){
    fechas_ordenar.emplace_back(IntroducirFechas(line));
  }
  
  std::ofstream fichero_modificado(fichero_salida, std::ofstream::out);
  fichero_modificado << OrdenarFechas(fechas_ordenar);
  
  return 0;

}