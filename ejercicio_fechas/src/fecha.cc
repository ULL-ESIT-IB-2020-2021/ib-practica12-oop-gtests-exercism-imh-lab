#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
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
std::string OrdenarFechas(std::vector <Fechas> fechas_ordenar){
  for (int i = 0; i < fechas_ordenar.size(); ++i){
    for (int j = i + 1; j < fechas_ordenar.size(); ++j){
      if (fechas_ordenar[i].anio < fechas_ordenar[j].anio){
        Fechas aux = fechas_ordenar[j];
        fechas_ordenar[j] = fechas_ordenar[i];
        fechas_ordenar[i] = aux;
      }
      else if(fechas_ordenar[i].anio == fechas_ordenar[j].anio){
        if (fechas_ordenar[i].mes < fechas_ordenar[j].mes){
          Fechas aux = fechas_ordenar[j];
          fechas_ordenar[j] = fechas_ordenar[i];
          fechas_ordenar[i] = aux;
        }
        else if (fechas_ordenar[i].mes == fechas_ordenar[j].mes){
          if (fechas_ordenar[i].dia < fechas_ordenar[j].dia){
            Fechas aux = fechas_ordenar[j];
            fechas_ordenar[j] = fechas_ordenar[i];
            fechas_ordenar[i] = aux;
          }
        }
      }
    }
  }
  
  int dia_retornar{0};
  int mes_retornar{0};
  int anio_retornar{0};
  std::string str1{""};
  std::string str2{""};
  std::string str3{""};
  std::string str4{""};
  for (int k = 0; k < fechas_ordenar.size(); ++k){
    char caracter{'/'};

    dia_retornar = fechas_ordenar[k].dia;
    str1 = std::to_string(dia_retornar);

    mes_retornar = fechas_ordenar[k].mes; 
    str2 = std::to_string(mes_retornar); 

    anio_retornar = fechas_ordenar[k].anio;
    str3 = std::to_string(anio_retornar);
    
    str4 += (str1 + caracter + str2 + caracter + str3 + '\n');
    
  }
  std::cout << str4 << std::endl;
  
  return str4;
}
Fechas IntroducirFechas(std::string fecha){
  Fechas fecha_;
  int dia;
  int mes;
  int anio;
  std::string aux{""};
  std::string aux2{""};
  std::string aux3{""};
  std::string aux4{""};
  std::string aux5{""};

  aux = fecha[0];
  aux2 = fecha[1];
  aux3 = aux + aux2;
  dia = std::stoi(aux3);
  std::cout << dia << "\n";

  aux = fecha[3];
  aux2 = fecha[4];
  aux3 = aux + aux2;
  mes = std::stoi(aux3);
  std::cout << mes << "\n";

  aux = fecha[6];
  aux2 = fecha[7];
  aux3 = fecha[8];
  aux4 = fecha[9];
  aux5 = aux + aux2 + aux3 + aux4;
  anio = std::stoi(aux5);
  std::cout << anio << "\n";

  fecha_.SetDia(dia);
  fecha_.SetMes(mes);
  fecha_.SetAnio(anio);
    
  return fecha_;
}