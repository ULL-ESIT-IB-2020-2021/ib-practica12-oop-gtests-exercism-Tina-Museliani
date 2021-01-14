/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Tinatin Museliani
 * @date 11 Jan 2021
 * @brief Definición de la clase Complejo y declaración de funciones
 */
#include <iostream>
#include <string>


class Complejo {
  private:
    int real{};
    int imag{};
  public:
     Complejo (std::string complejo={"1+2i"})
          :real{std::stoi(complejo.substr(0,1))}, imag{std::stoi(complejo.substr(0,1))} {}
    int real() const { return real; }
    int imag() const { return imag; }
    friend void operator+ (Complejo &c1,Complejo &c2);
    friend void operator- ( Complejo  &c1, Complejo &c2);
    std::string print(Complejo  &c1);
};