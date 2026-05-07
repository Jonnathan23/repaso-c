

#include <iostream>

using namespace std;

class Libro {
  public:
    string titulo;
    string autor;

    Libro(string titulo, string autor) {
        this->titulo = titulo;
        this->autor = autor;
    }

    ~Libro() {
        cout << "Destructuor llamando para: " << this->titulo << endl;
    }
};

int main(int argc, char *argv[]) {

    //* Llaves para indicar el ciclo de vida del objeto
    {
        Libro persona("20 mil leguajes de viaje submarino","Julio Verne");

        cout << "Dentro del bloque main con el libro construido" << endl;
    }

    cout << " \nFin del programa :)";

    return 0;
}