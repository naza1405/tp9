#include <iostream>
using namespace std;

class Sumatoria {
private:
    int suma;
public:
    Sumatoria() {
        suma = 0;
        int valor;
        cout << "Ingrese valores enteros (0 para finalizar): ";
        do {
            cin >> valor;
            suma += valor;
        } while (valor != 0);
    }
    ~Sumatoria() {
        cout << "\nLa suma total de los valores ingresados es: " << suma << endl;
    }
};

int main() {
    Sumatoria s1;
    return 0;
}

