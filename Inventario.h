#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Producto.h"
#include <vector>

using namespace std;

class Inventario {
private:
    vector<Producto> productos;

public:
    void addProducto(const Producto& producto) { productos.push_back(producto); }
    vector<Producto> getProductos() const { return productos; }

    void mostrarInventario() const {
        for (const auto& producto : productos) {
            producto.mostrarInfo();
        }
    }
};

#endif // INVENTARIO_H
