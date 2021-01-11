#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>


class Fechas{
  public: 
    void SetDia(int dia_);
    void SetMes(int mes_);
    void SetAnio(int anio_);
    std::string OrdenarFechas(std::vector <Fechas> fechas_ordenar);
  private:
    int dia{0};
    int mes{0};
    int anio{0};

};
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
    std::cout << str1 + caracter + str2 + caracter + str3 << '\n';
  }
  
}
int main (){
    std::cout << "llega aquí";
    std::vector <Fechas> fechas_ordenar;
    std::cout << "llega aquí";
    for (int k = 0; k < 5; ++k){
      std::string fecha;
      std::cout << "Introduce una fecha: ";
      std::cin >> fecha;
      int dia;
      int mes;
      int anio;
      Fechas fecha_;
      std::string aux{""};
      std::cout << "hola";
      aux = (fecha[0] + fecha[1]);
      //aux += fecha[1];
      std::cout << aux;
      //dia = std::stoi(aux);
      aux = fecha[3];
      /*aux += fecha[4];
      mes = std::stoi(aux);
      aux = fecha[6] + fecha[7] + fecha[8] + fecha[9];
      anio = std::stoi(aux);

      fecha_.SetDia(dia);
      fecha_.SetMes(mes);
      fecha_.SetAnio(anio);*/
      fechas_ordenar.emplace_back(fecha_);
      
    }
    Fechas fecha_;
    fecha_.OrdenarFechas(fechas_ordenar);
    
    return 0;

}