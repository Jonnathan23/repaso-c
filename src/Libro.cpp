

#include <iostream>

using namespace std;

class Libro {

  private:
    double precio;

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

    void ponerPrecio(double nuevoPrecio) {
        if (nuevoPrecio <= 0) {
            cout << "Precio invalido" << endl;
            return;
        }

        this->precio = nuevoPrecio;
    }

    double obtenerPrecio() {
        return this->precio;
    }
};

int main(int argc, char *argv[]) {

    //* Llaves para indicar el ciclo de vida del objeto
    {
        Libro libro("20 mil leguajes de viaje submarino", "Julio Verne");

        cout << "Dentro del bloque main con el libro construido" << endl;

        libro.ponerPrecio(26);

        cout << "El nuevo precio del libro es: " << libro.obtenerPrecio() << endl;
    }

    cout << " \nFin del programa :)";

    return 0;
}