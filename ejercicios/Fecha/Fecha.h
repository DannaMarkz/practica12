/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file Fecha.h
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 11 2023
* @brief Representar y gestionar fechas.
*/

#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Fecha {
 public:
  Fecha();
  Fecha(const int dia, const int mes, const int anio);
  int dia() const { return dia_; }
  int mes() const { return mes_; }
  int anio() const { return anio_; }
  bool es_bisiesto() const;
  bool es_valida() const;
  friend ostream& operator<<(ostream& os, const Fecha& fecha);
  friend istream& operator>>(istream& is, Fecha& fecha);
 private:
  int dia_{0};
  int mes_{0};
  int anio_{0};
};

#endif