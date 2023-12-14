/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file Circulo.h
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 10 2023
* @brief representar círculos utilizando como atributos el centro, el radio y el color del círculo.
*/

#include <iostream>
#include <string>

#ifndef Circulo_H
#define Circulo_H
class Circulo {
    public:
        enum class Color {Rojo, Verde, Azul};
        Circulo();
        Circulo(double x, double y, double r, Color c);
        void Show(int a);
        void Area(int a);
        void Perimetro(int a);
        void Print(int a);
        void IsInterior(double x, double y);
    private:
        double x_;
        double y_;
        double r_;
        Color c_;
};

#endif