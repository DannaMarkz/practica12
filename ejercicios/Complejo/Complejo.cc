/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file Complejo.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 10 2023
* @brief  Representar puntos en el espacio bidimensional a través de sus coordenadas
*/

#include "Complejo.h"

Complejo::Complejo() : real_(0), imaginario_(0) {}

Complejo::Complejo(double real, double imaginario) : real_(real), imaginario_(imaginario) {}

Complejo Complejo::operator+(const Complejo& otro) const {
    Complejo resultado;
    resultado.real_ = real_ + otro.real_;
    resultado.imaginario_ = imaginario_ + otro.imaginario_;
    return resultado;
}

Complejo Complejo::operator-(const Complejo& otro) const {
    Complejo resultado;
    resultado.real_ = real_ - otro.real_;
    resultado.imaginario_ = imaginario_ - otro.imaginario_;
    return resultado;
}

Complejo Complejo::operator*(const Complejo& otro) const {
    Complejo resultado;
    resultado.real_ = real_ * otro.real_ - imaginario_ * otro.imaginario_;
    resultado.imaginario_ = real_ * otro.imaginario_ + imaginario_ * otro.real_;
    return resultado;
}

Complejo Complejo::operator/(const Complejo& otro) const {
    Complejo resultado;
    double denominador = otro.real_ * otro.real_ + otro.imaginario_ * otro.imaginario_;
    resultado.real_ = (real_ * otro.real_ + imaginario_ * otro.imaginario_) / denominador;
    resultado.imaginario_ = (imaginario_ * otro.real_ - real_ * otro.imaginario_) / denominador;
    return resultado;
}

std::ostream& operator<<(std::ostream& os, const Complejo& complejo) {
    os << complejo.real_;
    if (complejo.imaginario_ >= 0) {
        os << " + " << complejo.imaginario_ << "i";
    } else {
        os << " - " << -complejo.imaginario_ << "i";
    }
    return os;
}

std::istream& operator>>(std::istream& is, Complejo& complejo) {
    std::cout << "Parte real: ";
    is >> complejo.real_;
    std::cout << "Parte imaginaria: ";
    is >> complejo.imaginario_;
    return is;
}