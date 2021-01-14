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

#include "date.h"


int main(int argc, char* argv[]){
  std::cout<< "Este programa toma un fichero de texto que contiene varias líneas con fechas y "
  << "las escribe en un segundo fichero de texto en orden cronológico."<<std::endl;

  if (argc !=3) {
    std::cout<< "Para la correcta ejecución del programa, debe indicar el nombre del fichero de texto "
    <<"en el que figuran las fechas a ordenar, además del nombre del fichero de salida "
    <<"en el que se van a escribir las fechas ordenadas." <<std::endl; 
    exit (1);
  }
  std::string file1 = argv[1];
  std::string file2 = argv[2];

Write(file1, file2);

return 0;
}