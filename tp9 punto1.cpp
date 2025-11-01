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
        cin.ignore();
    }
    void imprimirDatos() {
        cout << "Nombre: " << nombre << "Edad: " << edad << endl;
    }
    void mayorDeEdad() {
        if (edad >= 18)
            cout << "Es mayor de edad.";
        else
            cout << "No es mayor de edad.";
    }
};

int main() {
    Alumno a1;
    a1.imprimirDatos();
    a1.mayorDeEdad();
    return 0;
}


