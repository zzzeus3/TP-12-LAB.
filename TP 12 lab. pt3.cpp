#include <iostream>
using namespace std;

class Punto {
private:
    int x, y;

public:
    Punto() : x(0), y(0) {}

    Punto(int xVal, int yVal) : x(xVal), y(yVal) {}

    void imprimir() const {
        cout << "Punto (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Punto p1; // Llama al constructor sin parámetros
    Punto p2(3, 4); // Llama al constructor con parámetros

    p1.imprimir();
    p2.imprimir();

    return 0;
}

