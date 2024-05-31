#ifndef PAPELERIA_H
#define PAPELERIA_H

#include "Factura.h"
#include "Proveedor.h"
#include "Producto.h"
#include "Inventario.h"
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Papeleria {
private:
    string nombre;
    vector<shared_ptr<Base>> elementos;  // Almacena punteros a Base

public:
    Papeleria(string _nombre) : nombre(_nombre) {}

    void addElemento(shared_ptr<Base> elemento) {
        elementos.push_back(elemento);
    }

    void mostrarInfo() const {
        cout << "Papeleria: " << nombre << endl;
        for (const auto& elem : elementos) {
            elem->mostrarInfo();
        }
    }
};

#endif // PAPELERIA_H
