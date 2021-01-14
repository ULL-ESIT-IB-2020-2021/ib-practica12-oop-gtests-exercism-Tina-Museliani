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

Complejo operator+ (const Complejo  &c1,const Complejo &c2) {
int suma_real= c1.real() + c2.real();
int suma_imag=  c1.imag() + c2.imag();
//std::cout<< suma_real<< "+"<< suma_imag<< "i"<< std::endl;
Complejo resultado= {suma_real, "+", suma_imag, "i"};
return resultado;
}

Complejo operator- (const Complejo  &c1, const Complejo &c2) {
int resta_real= c2.real() - c2.real();
int resta_imag=  c1.imag() - c2.imag();
//std::cout<< resta_real<< "-"<< resta_imag<< "i"<< std::endl;
Complejo resultado= {resta_real, "+", resta_imag, "i"};
return resultado;
}
std::ostream& operator<< (std::ostream &out, const Complejo& c1) {
 out << c1.real() << "+" << c1.imag() << "i"; 
 return out; 
}
/*std::string print(Complejo  &c1){
    std::string print= {c1};
    std::cout<< c1 << std::endl;
}*/