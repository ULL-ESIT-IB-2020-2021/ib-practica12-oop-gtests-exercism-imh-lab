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
  //std::ifstream input(fichero_entrada, std::ifstream::in);
  /*for( std::string line; getline( input, line ); ){
    int dia;
    int mes;
    int anio;
    Fechas fecha_;
    for (int i = 0; i <= line.size(); ++i){
      if (i == 0){
        std::string aux{""};
        aux = line[i];
        aux += line[i+1];
        dia = stoi(aux);
      }
      else if(i = 3){
        std::string aux{""};
        aux = line[i];
        aux += line[i+1];
        mes = stoi(aux);
      }
      else if(i = 6){
        std::string aux{""};
        aux = line[i] + line[i+1] + line[i+2] + line[i+3];
        anio = stoi(aux);
      }
      fecha_.SetDia(dia);
      fecha_.SetMes(mes);
      fecha_.SetAnio(anio);
      fechas_ordenar.emplace_back(fecha_);
    }
    
    
  }*/

  
  Fechas fecha_;
  /*std::ofstream fichero_modificado(fichero_salida, std::ofstream::out);
  fichero_modificado << fecha_.OrdenarFechas(fechas_ordenar);*/
  std::cout << fecha_.OrdenarFechas(fechas_ordenar);

  return 0;

}