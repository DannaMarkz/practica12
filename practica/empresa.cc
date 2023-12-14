/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file empresa.cc
* @author Danna Cristina Márquez Martín alu0101648408@ull.edu.es
* @date Dic 14 2023
* @brief 
*/

#include <iostream>
#include <string>
#include <ctime>

class vehiculos {
protected:
    std::string tipo;
    std::string marca;
    std::string modelo;
    int año;
    double costo_base;
    bool disponible;
    time_t fecha_inicio_alquiler;

public:
    vehiculos(std::string _tipo, std::string _marca, std::string _modelo, int _año, double _costo_base)
        : tipo(_tipo), marca(_marca), modelo(_modelo), año(_año), costo_base(_costo_base), disponible(true), fecha_inicio_alquiler(0) {}

};

class Coche : public vehiculos {
private:
    int capacidad_pasajeros;

public:
    Coche(std::string _marca, std::string _modelo, int _año, double _costo_diario, int _capacidad_pasajeros)
        : vehiculos("Coche", _marca, _modelo, _año, _costo_diario), capacidad_pasajeros(_capacidad_pasajeros) {}

    void mostrarInfo() override {
        vehiculos::mostrarInfo();
        std::cout << "Capacidad de Pasajeros: " << capacidad_pasajeros << std::endl;
    }
};

class Motocicleta : public vehiculos {
private:
    std::string tipo_moto;

public:
    Motocicleta(std::string _marca, std::string _modelo, int _año, double _costo_por_hora, std::string _tipo_moto)
        : vehiculos("Motocicleta", _marca, _modelo, _año, _costo_por_hora), tipo_moto(_tipo_moto) {}

    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        std::cout << "Tipo de Moto: " << tipo_moto << std::endl;
    }
};

class Bicicleta : public vehiculos {
public:
    Bicicleta(std::string _marca, std::string _modelo, int _año, double _costo_por_hora)
        : vehiculos("Bicicleta", _marca, _modelo, _año, _costo_por_hora) {}
};

class Caravana : public vehiculos {
public:
    Caravana(std::string _marca, std::string _modelo, int _año, double _costo_semanal)
        : vehiculos("Caravana", _marca, _modelo, _año, _costo_semanal) {}
};

class Barco : public vehiculos {
public:
    Barco(std::string _marca, std::string _modelo, int _año, double _costo_semanal)
        : vehiculos("Barco", _marca, _modelo, _año, _costo_semanal) {}
};
class Usuario {
protected:
    std::string nombre;
    std::string apellido;
    std::string correo;
    int edad;
public:
    Usuario(std::string _nombre, std::string _apellido, std::string _correo, int _edad)
        : nombre(_nombre), apellido(_apellido), correo(_correo), edad(_edad) {}
    virtual void mostrarInfo() {
        std::cout << "Nombre: " << nombre << ", Apellido: " << apellido << ", Correo: " << correo << ", Edad: " << edad << " años" << std::endl;
    }    
};
class Cliente : public Usuario {
private:
    int numero_reservas;
public:
    Cliente(std::string _nombre, std::string _apellido, std::string _correo, int _edad)
        : Usuario(_nombre, _apellido, _correo, _edad), numero_reservas(0) {}

    void mostrarInfo() override {
        Usuario::mostrarInfo();
        std::cout << "Número de Reservas: " << numero_reservas << std::endl;
    }
};
class Administrador : public Usuario {
public:
    Administrador(std::string _nombre, std::string _apellido, std::string _correo, int _edad)
        : Usuario(_nombre, _apellido, _correo, _edad) {}
};
class Operador : public Usuario {
public:
    Operador(std::string _nombre, std::string _apellido, std::string _correo, int _edad)
        : Usuario(_nombre, _apellido, _correo, _edad) {}
};
class AgenciaDeViaje : public Usuario {
private:
    std::string nombre_agencia;
public:
    AgenciaDeViaje(std::string _nombre, std::string _apellido, std::string _correo, int _edad, std::string _nombre_agencia)
        : Usuario(_nombre, _apellido, _correo, _edad), nombre_agencia(_nombre_agencia) {}

    void mostrarInfo() override {
        Usuario::mostrarInfo();
        std::cout << "Nombre de Agencia: " << nombre_agencia << std::endl;
    }
};
