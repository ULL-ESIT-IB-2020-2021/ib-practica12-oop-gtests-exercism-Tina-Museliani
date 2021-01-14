/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Tinatin Museliani
 * @date 11 Jan 2021
 * @brief Definición de funciones para el programa principal
 */

#include "date.h"

std::vector<std::string> Read(std::string sample) {
  /** ifstream se usa para leer archivos, en esta ocasión abriremos el archivo
  de texto con las fechas*/
  std::ifstream infile{sample};
  std::string line;
  std::vector<std::string> dates {};
  std::string date;
 
  // Si el archivo no pudo abrirse, habrá un mensaje de error
  if (!infile) {
    std::cerr << "El archivo no ha podido abrirse\n";
    exit (1);
  }
  //Leemos el archivo e insertamos los datos en un vector

 while (getline(infile,line)) {
    std::istringstream iss (line);
    if (iss>> date){
      dates.push_back(date);
    }
  }
  
  return dates;
}

std::vector<Date> Sort(std::string infile){
  //Primero definimos un vector con los datos del archivo usando la función "Read"
  std::vector <std::string> date_str { Read(infile)};


   std::cout<< "Fechas iniciales: "<< std::endl; //Imprimimos los datos en pantalla
   for (int i=0; i< date_str.size(); i++){
     std::cout<< date_str[i]<<std::endl;
     }
    //Asignammos el valor de las cadenas a cada objeto para poder compararlos correctamente
     const Date date1={date_str[0]};
     const Date date2={date_str[1]};
     const Date date3={date_str[2]};
     const Date date4={date_str[3]};
     const Date date5={date_str[4]};
     const Date date6={date_str[5]};
     const Date date7={date_str[6]};

     //Formamos un vector con los objetos para luego reordenarlo
     std::vector<Date> to_sort {date1, date2, date3, date4, date5, date6, date7};
     const Date max = {"31/12/2200"};
  
  Date auxiliar {"01/01/2000"};
  for (int i=0; i< to_sort.size(); i++){
    for (int j= 0; j<to_sort.size()-1; j++){
      if (to_sort[j] > to_sort [j+1]){ //Ordenamos las fechas de menor a mayor
        auxiliar = to_sort [j];
        to_sort[j]= to_sort [j+1];
        to_sort [j+1]= auxiliar;
        
      }
      if (to_sort[j] > max){ //Fecha máxima
      std::cout<< "Se ha introducido una fecha inválida: "<<to_sort[j]<< std::endl;
      exit(1);
      }
    }
  }

  std::cout<< "Fechas ordenadas: "<<std::endl; //Imprimimos los datos en pantalla
  for (int i=0; i< to_sort.size(); i++){
    std::cout<< to_sort[i]<< std::endl;
  }

  return to_sort;
}

void Write (std::string infile, std::string outfile){ 
  std::ofstream ofile{outfile};

  // Si no se puede abrir el archivo de salida
  if (!ofile) {
    std::cout << "El archivo no ha podido abrirse para su escritura." << std::endl;
  }
  std::vector <Date> output= Sort (infile); //Usamos la función sort para ordenar las fechas de entrada

  for (int i=0; i< output.size(); i++){
    ofile << output[i];
    ofile << std::endl;
  }

}

// Operador de inserción de la clase Date
std::ostream& operator<< (std::ostream &out, const Date& date) {
 out << date.day() << "/" << date.month() << "/" << date.year(); 
 return out; 
}


// Convierte una Fecha en string
std::string ToString(Date date) {
	std::string resultado{""};
  std::stringstream os;

	// resultado = resultado + date.day() + "/" + date.month() + "/" + date.year();
	os << date.day() << "/" << date.month() << "/" << date.year();
  os >> resultado;

	return resultado;
}

bool operator== (const Date &d1, const Date &d2) {
  return (d1.day() == d2.day() && d1.month() == d2.month() && d1.year() == d2.year());
}

bool operator> (const Date &d1, const Date &d2) {
	if (d1.year() > d2.year()) {
		return true;
	}
	if ((d1.year() == d2.year()) && (d1.month() > d2.month())) {
		return true;
	}
	if ((d1.year() == d2.year()) && (d1.month() == d2.month()) && (d1.day() > d2.day())) {
		return true;
	}
	return false;
}