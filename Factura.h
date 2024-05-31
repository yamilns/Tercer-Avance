#ifndef FACTURA_H
#define FACTURA_H

#include "Base.h"
#include "Producto.h"
#include <string>
#include <vector>

using namespace std;

class Factura : public Base {
private:
    string cliente;
    vector<Producto> productos;
    double total;

public:
    Factura(string _cliente, int _id) : Base(_id), cliente(_cliente), total(0) {}

    string getCliente() const { return cliente; }
    double getTotal() const { return total; }
    void addProducto(const Producto& producto) {
        productos.push_back(producto);
        total += producto.getPrecio();
    }

    virtual void mostrarInfo() const override {
        cout << "Factura ID: " << id << ", Cliente: " << cliente << ", Total: " << total << endl;
        cout << "Productos:" << endl;
        for (const auto& producto : productos) {
            producto.mostrarInfo();
        }
    }
};

#endif // FACTURA_H
