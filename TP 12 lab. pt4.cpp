#include <iostream>
#include <string>
#include <locale.h> // Incluir para configurar la localización

using namespace std;

class Socio {
private:
    string nombre;
    int antiguedad;

public:
    Socio() {
        cout << "Ingrese el nombre del socio: ";
        getline(cin, nombre);
        cout << "Ingrese la antigüedad en años: ";
        cin >> antiguedad;
        cin.ignore();
    }

    int getAntiguedad() const {
        return antiguedad;
    }

    string getNombre() const {
        return nombre;
    }
};

class Club {
private:
    Socio socios[3];

public:
    Club() {
        cout << "Cargando datos de los socios:" << endl;
        for (int i = 0; i < 3; i++) {
            socios[i] = Socio();  // Inicializa cada socio en el array
        }
    }

    void imprimirSocioMayorAntiguedad() const {
        int mayor = 0;
        for (int i = 1; i < 3; i++) {
            if (socios[i].getAntiguedad() > socios[mayor].getAntiguedad()) {
                mayor = i;
            }
        }
        cout << "El socio con mayor antigüedad es: " << socios[mayor].getNombre()
             << " con " << socios[mayor].getAntiguedad() << " años." << endl;
    }
};

int main() {
    setlocale(LC_ALL, ""); // Establece la localización para soportar caracteres especiales

    Club club;
    club.imprimirSocioMayorAntiguedad();

    return 0;
}

