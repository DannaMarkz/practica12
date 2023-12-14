/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file Fecha_main.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 11 2023
* @brief Representar y gestionar fechas.
*/

#include "Fecha.h"
#include <iostream>

int main() {
    int dia, mes, anio;

    // Solicitar al usuario que ingrese la fecha 1
    std::cout << "Ingrese la fecha 1 (Formato: DD MM AAAA): ";
    std::cin >> dia >> mes >> anio;
    Fecha fecha1(dia, mes, anio);

    // Solicitar al usuario que ingrese la fecha 2
    std::cout << "Ingrese la fecha 2 (Formato: DD MM AAAA): ";
    std::cin >> dia >> mes >> anio;
    Fecha fecha2(dia, mes, anio);

    // Realizar las operaciones y mostrar los resultados
    std::cout << "Fecha 1: " << fecha1 << std::endl;
    std::cout << "Fecha 2: " << fecha2 << std::endl;

    std::cout << "Fecha 1 es bisiesto: " << (fecha1.es_bisiesto() ? "Sí" : "No") << std::endl;
    std::cout << "Fecha 2 es bisiesto: " << (fecha2.es_bisiesto() ? "Sí" : "No") << std::endl;

    std::cout << "Fecha 1 es valida: " << (fecha1.es_valida() ? "Sí" : "No") << std::endl;
    std::cout << "Fecha 2 es valida: " << (fecha2.es_valida() ? "Sí" : "No") << std::endl;

    return 0;
}