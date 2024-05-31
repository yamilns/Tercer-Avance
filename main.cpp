#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include "Papeleria.h"

using namespace std;

int main() {
    Papeleria papeleria("Papeleria Esperanza");

    // Ingresar el nombre y el número de productos
    int numProductos;
    cout << "Ingrese el número de productos: ";
    cin >> numProductos;

    for (int i = 0; i < numProductos; ++i) {
        string nombreProducto;
        double precioProducto;
        int idProducto;

        cout << "Ingrese el nombre del producto " << i + 1 << ": ";
        cin >> ws;
        getline(cin, nombreProducto);
        cout << "Ingrese el precio del producto " << i + 1 << ": ";
        cin >> precioProducto;
        cout << "Ingrese el ID del producto " << i + 1 << ": ";
        cin >> idProducto;

        auto producto = make_shared<Producto>(nombreProducto, precioProducto, idProducto);
        papeleria.addElemento(producto);
    }

    // Ingresar el nombre y el número de proveedores
    int numProveedores;
    cout << "Ingrese el número de proveedores: ";
    cin >> numProveedores;

    for (int i = 0; i < numProveedores; ++i) {
        string nombreProveedor;
        int idProveedor;

        cout << "Ingrese el nombre del proveedor " << i + 1 << ": ";
        cin >> ws; 
        getline(cin, nombreProveedor);
        cout << "Ingrese el ID del proveedor " << i + 1 << ": ";
        cin >> idProveedor;

        auto proveedor = make_shared<Proveedor>(nombreProveedor, idProveedor);
        papeleria.addElemento(proveedor);
    }

    // Ingresar el nombre y el número de facturas
    int numFacturas;
    cout << "Ingrese el número de facturas: ";
    cin >> numFacturas;

    for (int i = 0; i < numFacturas; ++i) {
        string clienteFactura;
        int idFactura;

        cout << "Ingrese el nombre del cliente para la factura " << i + 1 << ": ";
        cin >> ws; 
        getline(cin, clienteFactura);
        cout << "Ingrese el ID de la factura " << i + 1 << ": ";
        cin >> idFactura;

        auto factura = make_shared<Factura>(clienteFactura, idFactura);
        papeleria.addElemento(factura);
    }

    // Mostrar la información completa de la papelería
    papeleria.mostrarInfo();

    return 0;
}
