/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file Circulo_main.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 10 2023
* @brief representar círculos utilizando como atributos el centro, el radio y el color del círculo.
*/

#include <iostream>
#include <string>
#include "Circulo.h"

int main() {
    double x1, y1, r1, x2, y2, r2, x3, y3, r3;

    // Solicitar al usuario que ingrese las coordenadas y el radio para los círculos
    std::cout << "Ingrese las coordenadas y el radio para el primer círculo (x y r): ";
    std::cin >> x1 >> y1 >> r1;

    std::cout << "Ingrese las coordenadas y el radio para el segundo círculo (x y r): ";
    std::cin >> x2 >> y2 >> r2;

    std::cout << "Ingrese las coordenadas y el radio para el tercer círculo (x y r): ";
    std::cin >> x3 >> y3 >> r3;

    // Crear objetos Circulo con los parámetros ingresados
    Circulo c1(x1, y1, r1, Circulo::Color::Rojo);
    Circulo c2(x2, y2, r2, Circulo::Color::Verde);
    Circulo c3(x3, y3, r3, Circulo::Color::Azul);

    c1.Show(1);
    c2.Show(2);
    c3.Show(3);

    c1.Area(1);
    c2.Area(2);
    c3.Area(3);

    c1.Perimetro(1);
    c2.Perimetro(2);
    c3.Perimetro(3);

    c1.Print(1);
    c2.Print(2);
    c3.Print(3);

    double x, y;
    std::cout << "Ingrese las coordenadas del punto para verificar si está dentro de algún círculo (x y): ";
    std::cin >> x >> y;

    c1.IsInterior(x, y);
    c2.IsInterior(x, y);
    c3.IsInterior(x, y);

    return 0;
}