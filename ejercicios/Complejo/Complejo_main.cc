/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file Complejo_main.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 10 2023
* @brief Representar puntos en el espacio bidimensional a través de sus coordenadas
*/

#include <iostream>
#include "Complejo.h"

int main() {
    Complejo complejo1, complejo2, resultado;

    std::cout << "Ingrese el primer número complejo:" << std::endl;
    std::cin >> complejo1;

    std::cout << "Ingrese el segundo número complejo:" << std::endl;
    std::cin >> complejo2;

    resultado = complejo1 + complejo2;
    std::cout << "Suma: " << resultado << std::endl;

    resultado = complejo1 - complejo2;
    std::cout << "Resta: " << resultado << std::endl;

    resultado = complejo1 * complejo2;
    std::cout << "Multiplicación: " << resultado << std::endl;

    resultado = complejo1 / complejo2;
    std::cout << "División: " << resultado << std::endl;

    return 0;
}