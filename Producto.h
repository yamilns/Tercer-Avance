#ifndef PRODUCTO_H
#define PRODUCTO_H

#include "Base.h"
#include <string>
#include <iostream>

using namespace std;

class Producto : public Base {
private:
    string nombre;
    double precio;

public:
    Producto(string _nombre, double _precio, int _id) : Base(_id), nombre(_nombre), precio(_precio) {}

    string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }

    virtual void mostrarInfo() const override {
        cout << "Producto ID: " << id << ", Nombre: " << nombre << ", Precio: " << precio << endl;
    }
};

#endif // PRODUCTO_H
