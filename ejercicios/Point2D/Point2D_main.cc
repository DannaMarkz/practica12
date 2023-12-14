/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file Point2D_main.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 13 2023
* @brief representar puntos en el espacio bidimensional a través de sus coordenadas. 
*/

#include <iostream>
#include "Point2D.h"

int main() {
    double x1, y1, x2, y2;

    // Solicitar al usuario que ingrese las coordenadas para los puntos
    std::cout << "Ingrese las coordenadas del primer punto (x y): ";
    std::cin >> x1 >> y1;

    std::cout << "Ingrese las coordenadas del segundo punto (x y): ";
    std::cin >> x2 >> y2;

    // Crear objetos Point2D con las coordenadas ingresadas
    Point2D p1(x1, y1);
    Point2D p2(x2, y2);

    p1.Show(1);
    p2.Show(2);

    p1.Move(5, 6);
    p1.Show(1);

    std::cout << "La distancia entre los puntos es: " << p1.Distance(p2) << std::endl;

    Point2D p3 = p1.Middle(p2);
    p3.Show(3);

    return 0;
}