/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Tinatin Museliani
 * @date 11 Jan 2021
 * @brief Definición de la clase Date y declaración de funciones
 */

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>



class Date {
 private:
  int year_{};
  int month_{};
  int day_{};
 
 public:
    Date(std::string date={"01/01/2000"})
       :year_{std::stoi(date.substr(6,4))}, month_{std::stoi(date.substr(3,2))}, day_{std::stoi(date.substr(0,2))} {}
    
  int year() const { return year_; }
  int month() const { return month_; }
  int day() const { return day_; }
	friend std::ostream& operator<<(std::ostream &out, const Date &date);
	friend bool operator== (const Date &d1, const Date &d2);
	friend bool operator> (const Date &d1, const Date &d2);
};

std::vector<std::string> Read(std::string sample);
std::vector<Date> Sort(std::string infile);
void Write (std::string infile, std::string outfile);