#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    void cargarDatos() {
        cout << "Ingrese el nombre: ";
        getline(cin, nombre);
        cout << "Ingrese la edad: ";
        cin >> edad;
        cin.ignore();
    }
    void imprimirDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " años" << endl;
    }
};

class Empleado : public Persona {
private:
    double sueldo;

public:
    void cargarSueldo() {
        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
    }
    void imprimirSueldo() {
        cout << "Sueldo: $" << sueldo << endl;
    }
};

int main() {
    Persona persona1;
    persona1.cargarDatos();
    persona1.imprimirDatos();

    Empleado empleado1;
    empleado1.cargarDatos(); 
    empleado1.cargarSueldo(); 
    empleado1.imprimirDatos(); 
    empleado1.imprimirSueldo();

    return 0;
}
