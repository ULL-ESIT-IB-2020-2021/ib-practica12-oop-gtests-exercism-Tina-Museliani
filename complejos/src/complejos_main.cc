/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Tinatin Museliani
 * @date 11 Jan 2021
 * @brief Programa principal con función main
 */
#include "complejos.h"

int main(int argc, char* argv[]){
  std::cout<< "Este programa toma dos números complejos (con parte real e imaginaria) y los opera."<<std::endl;

  if (argc !=3) {
    std::cout<< "Para la correcta ejecución del programa, debe indicar los valores de la parte real e imaginaria "<<
    "de los números complejos. Si una de ellas es nula, escriba 0."<<
    "Ejemplo: 1+2i 5+0i" <<std::endl; 
    exit (1);
  }
  std::string string1= argv[1];
  std::string string2= argv[2];
  Complejo (numero1) = string1;
  Complejo (numero2) = string2;
  

  std::cout<< numero1 + numero2<< std::endl;
  std::cout<< numero1 + numero2<< std::endl;
  return 0;
}
