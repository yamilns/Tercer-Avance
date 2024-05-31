#ifndef PROVEEDOR_H
#define PROVEEDOR_H

#include "Base.h"
#include "Producto.h"
#include <string>
#include <vector>

using namespace std;

class Proveedor : public Base {
private:
    string nombre;
    vector<Producto> productos;

public:
    Proveedor(string _nombre, int _id) : Base(_id), nombre(_nombre) {}

    string getNombre() const { return nombre; }
    void addProducto(const Producto& producto) { productos.push_back(producto); }
    vector<Producto> getProductos() const { return productos; }

    virtual void mostrarInfo() const override {
        cout << "Proveedor: " << nombre << endl;
        cout << "Productos:" << endl;
        for (const auto& producto : productos) {
            producto.mostrarInfo();
        }
    }
};

#endif // PROVEEDOR_H
