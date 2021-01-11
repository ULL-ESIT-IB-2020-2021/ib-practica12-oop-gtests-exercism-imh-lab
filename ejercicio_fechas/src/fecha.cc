#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "fecha.h"
/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char* argv[]) {
  
  if (argc == 1 && argc != 3) {
    std::cout << argv[0] << ": faltan parámetros" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc == 2){
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << kHelpText << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != 3){
    std::cout << argv[0] << ": faltan parámetros" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void Fechas::SetDia(int dia_){
  dia = dia_;
  
}

void Fechas::SetMes(int mes_){
  mes = mes_;
}

void Fechas::SetAnio(int anio_){
  anio = anio_;
}
std::string Fechas::OrdenarFechas(std::vector <Fechas> fechas_ordenar){
  for (int i = 0; i < fechas_ordenar.size(); ++i){
    for (int j = i + 1; j < fechas_ordenar.size(); ++j){
      if (fechas_ordenar[i].anio < fechas_ordenar[j].anio){
        Fechas aux = fechas_ordenar[j];
        fechas_ordenar[j] = fechas_ordenar[i];
        fechas_ordenar[i] = aux;
      }
      else if(fechas_ordenar[i].anio = fechas_ordenar[j].anio){
        if (fechas_ordenar[i].mes < fechas_ordenar[j].mes){
          Fechas aux = fechas_ordenar[j];
          fechas_ordenar[j] = fechas_ordenar[i];
          fechas_ordenar[i] = aux;
        }
        else if (fechas_ordenar[i].mes = fechas_ordenar[j].mes){
          if (fechas_ordenar[i].dia < fechas_ordenar[j].dia){
            Fechas aux = fechas_ordenar[j];
            fechas_ordenar[j] = fechas_ordenar[i];
            fechas_ordenar[i] = aux;
          }
        }
      }
    }
  }
  
  for (int k = 0; k <= fechas_ordenar.size(); ++k){
    char caracter{'/'};
    int dia_retornar{fechas_ordenar[k].dia};
    std::string str1 = std::to_string(dia_retornar);
    int mes_retornar{fechas_ordenar[k].mes}; 
    std::string str2 = std::to_string(mes_retornar); 
    int anio_retornar{fechas_ordenar[k].anio};
    std::string str3 = std::to_string(mes_retornar);
    return (str1 + caracter + str2 + caracter + str3 + '\n');
  }
  
}