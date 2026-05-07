#include <iostream>

using namespace std;

class Animal {
  public:
    void comer() {
        cout << "Animal comiendo nam nam" << endl;
    }

    void dormir() {
        cout << "Zzz..." << endl;
    }
};

//* Herencia publica
class Perro : public Animal {
  public:
    void ladrar() {
        cout << "Gua guau" << endl;
    }
};


//* Herencia privada
class Gato : Animal {
  public:
    void miau() {
        cout << "Miau Miau" << endl;
    }

    void diaGatuno() {
        miau();
        comer();
        miau();
        dormir();
    }
};

int main(int argc, char *argv[]) {
    cout << "\n-----| Perro |-----" << endl;
    Perro tobi;
    tobi.ladrar();
    tobi.comer();
    tobi.dormir();

    cout << "\n-----| Gato |-----" << endl;
    Gato mishi;
    mishi.miau();
    mishi.diaGatuno();

    return 0;
}