/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Tinatin Museliani
 * @date 11 Jan 2021
 * @brief Definición de funciones
 */

#include "complejos.h"

void operator+ (Complejo  &c1, Complejo &c2) {
int suma_real= c1.real() + c2.real();
int suma_imag=  c1.imag() + c2.imag();
std::cout<< suma_real<< "+"<< suma_imag<< "i"<< std::endl;
}

void operator- (Complejo  &c1, Complejo &c2) {
int resta_real= c1.real() - c2.real();
int resta_imag=  c1.imag() - c2.imag();
std::cout<< resta_real<< "-"<< resta_imag<< "i"<< std::endl;
}

/*std::string print(Complejo  &c1){
    std::string print= {c1};
    std::cout<< c1 << std::endl;
}*/