/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file Complejo.h
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 10 2023
* @brief  Representar puntos en el espacio bidimensional a través de sus coordenadas
*/

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

class Complejo {
public:
    Complejo();
    Complejo(double real, double imaginario);

    Complejo operator+(const Complejo& otro) const;
    Complejo operator-(const Complejo& otro) const;
    Complejo operator*(const Complejo& otro) const;
    Complejo operator/(const Complejo& otro) const;

    friend std::ostream& operator<<(std::ostream& os, const Complejo& complejo);
    friend std::istream& operator>>(std::istream& is, Complejo& complejo);

private:
    double real_;
    double imaginario_;
};

#endif // COMPLEJO_H