#include <iostream>
#include <string>
using namespace std;

class Empleado {
private:
    string nombre;
    float sueldo;
public:
    Empleado() {
        cout << "Ingrese nombre del empleado: ";
        getline(cin, nombre);
        cout << "Ingrese sueldo: ";
        cin >> sueldo;
        cin.ignore();
    }
    void imprimirDatos() {
        cout << "\nNombre: " << nombre << "\nSueldo: $" << sueldo << endl;
    }
    void pagaImpuestos() {
        if (sueldo > 3000)
            cout << "Debe pagar impuestos.\n";
        else
            cout << "No debe pagar impuestos.\n";
    }
};

int main() {
    Empleado e1;
    e1.imprimirDatos();
    e1.pagaImpuestos();
    return 0;
}

