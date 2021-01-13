#include <iostream>
#include <string>
#include <vector>

const std::string kHelpText = R"(Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txt)";
void Usage(int argc, char *argv[]);
class Fechas{
  public: 
    Fechas(std::vector <Fechas> fechas_ordenar){

    }
    Fechas(){

    }
    void SetDia(int dia_);
    void SetMes(int mes_);
    void SetAnio(int anio_);
    friend std::string OrdenarFechas(std::vector <Fechas> fechas_ordenar, std::string fichero_salida);
  private:
    int dia{0};
    int mes{0};
    int anio{0};
    

};
std::vector <Fechas> IntroducirFechas(std::string fecha);