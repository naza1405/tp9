#include <iostream>
#include <string>
using namespace std;

class Alumno {
private:
    string nombre;
    int edad;
public:
    Alumno() {
        cout << "Ingrese nombre del alumno: ";
        getline(cin, nombre);
        cout << "Ingrese edad: ";
        cin >> edad;
        cin.ignore(); // limpia el buffer
    }
    void imprimirDatos() {
        cout << "\nNombre: " << nombre << "\nEdad: " << edad << endl;
    }
    void mayorDeEdad() {
        if (edad >= 18)
            cout << "Es mayor de edad.\n";
        else
            cout << "No es mayor de edad.\n";
    }
};

int main() {
    Alumno a1;
    a1.imprimirDatos();
    a1.mayorDeEdad();
    return 0;
}

