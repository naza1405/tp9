#include <iostream>
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    float calificacion;
public:
    void setNombre(string n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setCalificacion(float c) { calificacion = c; }

    string getNombre() { return nombre; }
    int getEdad() { return edad; }
    float getCalificacion() { return calificacion; }
};

int main() {
    Estudiante est;

    est.setNombre("Nazareno");
    est.setEdad(20);
    est.setCalificacion(9.5);

    cout << "Nombre: " << est.getNombre() << endl;
    cout << "Edad: " << est.getEdad() << endl;
    cout << "Calificación: " << est.getCalificacion() << endl;

    return 0;
}

