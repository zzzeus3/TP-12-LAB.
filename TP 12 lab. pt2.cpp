#include <iostream>
#include <vector>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona() {
        cout << "Ingrese el nombre: ";
        getline(cin, nombre);
        cout << "Ingrese la edad: ";
        cin >> edad;
        cin.ignore();
    }

    void imprimirDatos() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }

    void verificarMayorEdad() const {
        if (edad >= 18) {
            cout << nombre << " es mayor de edad." << endl;
        } else {
            cout << nombre << " no es mayor de edad." << endl;
        }
    }
};

class Vector {
private:
    vector<int> elementos;

public:
    Vector() {
        cout << "Ingrese 5 elementos para el vector:" << endl;
        for (int i = 0; i < 5; i++) {
            int valor;
            cout << "Elemento " << i + 1 << ": ";
            cin >> valor;
            elementos.push_back(valor);
        }
    }

    void imprimir() const {
        cout << "Vector completo: ";
        for (size_t i = 0; i < elementos.size(); i++) {
            cout << elementos[i] << " ";
        }
        cout << endl;
    }

    void imprimir(int hasta) const {
        cout << "Vector (hasta índice " << hasta << "): ";
        for (int i = 0; i <= hasta && i < elementos.size(); i++) {
            cout << elementos[i] << " ";
        }
        cout << endl;
    }

    void imprimir(int desde, int hasta) const {
        cout << "Vector (rango " << desde << " a " << hasta << "): ";
        for (int i = desde; i <= hasta && i < elementos.size(); i++) {
            cout << elementos[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Persona persona;
    persona.imprimirDatos();
    persona.verificarMayorEdad();

    Vector vector;
    vector.imprimir();
    vector.imprimir(3);  
    vector.imprimir(1, 4); 

    return 0;
}

