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
    int real_{};
    int imag_{};
  public:
     Complejo (std::string complejo={"1+2i"})
          :real_{std::stoi(complejo.substr(0,1))}, imag_{std::stoi(complejo.substr(0,1))} {}
     Complejo (int _real, std::string op, int _imag, std::string im= {"i"}) 
          :real_{_real}, imag_{_imag } {}  
      int real() const { return real_; }
      int imag() const { return imag_; }
    friend Complejo operator+ (const Complejo &c1, const Complejo &c2);
    friend Complejo operator- (const Complejo  &c1, const Complejo &c2);
    friend std::ostream& operator<< (std::ostream &out, const Complejo &c1);
    std::string print(Complejo  &c1);
};