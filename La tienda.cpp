// Calculo de una factura - La Tienda
// Estudiante: Junior Ivon Jose Jean - Matricula: 2026-1655
#include <iostream>
#include <iomanip>
using namespace std;

// Prototipos de las funciones
double calcularTotalPagar(int cantidad, double precio);
void mostrarTotal(double totalPagar);

int main() {
    int cantidad;
    double precio;

    cout << "Cantidad: ";
    cin >> cantidad;
    cout << "Precio: ";
    cin >> precio;

    // Se llama a la funcion y se guarda lo que retorna
    double totalPagar = calcularTotalPagar(cantidad, precio);

    // Se pasa el resultado al procedimiento
    mostrarTotal(totalPagar);

    return 0;
}

// Funcion: calcula cantidad x precio y aplica 10% de descuento si supera 5,000
double calcularTotalPagar(int cantidad, double precio) {
    double total = cantidad * precio;
    if (total > 5000) {
        total = total - (total * 0.10);
    }
    return total;
}

// Procedimiento: muestra en pantalla el total a pagar
void mostrarTotal(double totalPagar) {
    cout << fixed << setprecision(2);
    cout << "Total a pagar: " << totalPagar << endl;
}