#include <iostream>
using namespace std;

class Operaciones {
private:
    int num1, num2;
public:
    Operaciones(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    void mostrarResultados() {
        cout << "Suma: " << num1 + num2 << endl;
        cout << "Resta: " << num1 - num2 << endl;
        cout << "Multiplicacion: " << num1 * num2 << endl;
        if (num2 != 0)
            cout << "Division: " << (float)num1 / num2 << endl;
        else
            cout << "Division: No se puede dividir por cero.\n";
    }
};

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    Operaciones op(a, b);
    op.mostrarResultados();
    return 0;
}

