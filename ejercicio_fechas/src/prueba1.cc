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
    friend std::string OrdenarFechas(std::vector <Fechas> fechas_ordenar);
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
  
  for (int k = 0; k <= fechas_ordenar.size(); ++k){
    char caracter{'/'};
    int dia_retornar{fechas_ordenar[k].dia};
    std::string str1 = std::to_string(dia_retornar);
    int mes_retornar{fechas_ordenar[k].mes}; 
    std::string str2 = std::to_string(mes_retornar); 
    int anio_retornar{fechas_ordenar[k].anio};
    std::string str3 = std::to_string(anio_retornar);
    std::cout << str1 + caracter + str2 + caracter + str3 << '\n';
  }
  
}
void IntroducirFechas();
int main (){
    //std::cout << "llega aquí";
    //std::cout << "llega aquí";
    IntroducirFechas();
  return 0;
}


void IntroducirFechas(){
  std::vector <Fechas> fechas_ordenar;
  Fechas fecha_;
  for (int k = 0; k < 5; ++k){
      std::string fecha;
      std::cout << "Introduce una fecha: ";
      std::cin >> fecha;
      int dia;
      int mes;
      int anio;
      std::string aux{""};
      std::string aux2{""};
      std::string aux3{""};
      std::string aux4{""};
      std::string aux5{""};
      //std::cout << "hola ";
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
      fechas_ordenar.emplace_back(fecha_);   
  }
  /*Fechas::*/OrdenarFechas(fechas_ordenar);

}