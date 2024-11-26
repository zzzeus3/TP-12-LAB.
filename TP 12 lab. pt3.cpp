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
    Punto p1; // Llama al constructor sin par�metros
    Punto p2(3, 4); // Llama al constructor con par�metros

    p1.imprimir();
    p2.imprimir();

    return 0;
}

