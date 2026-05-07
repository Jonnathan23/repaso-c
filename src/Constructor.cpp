#include <iostream>

using namespace std;

class Persona {
  public:
    string nombre;

    Persona(string nombre) {
        this->nombre = nombre;
    }

    ~Persona() {
        cout << "Destructuor llamando para: " << this->nombre << endl;
    }
};

int main(int argc, char *argv[]) {

    //* Llaves para indicar el ciclo de vida del objeto
    {
        Persona persona("Daniel Jane");

        cout << "Dentro del bloque main con la persona viva" << endl;
    }

    cout << " \nFin del programa :)";

    return 0;
}