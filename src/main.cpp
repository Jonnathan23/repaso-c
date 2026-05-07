#include <iostream>

using namespace std;

void ordenarArreglo(int *array, int dimensionArray) {
    bool isOrder = false;

    do {
        for (int j = 0; j < dimensionArray; j++) {
            for (int i = 0; i < dimensionArray - 1; i++) { // 2
                int temporal;
                int currently = array[i];      // 9
                int nextNumber = array[i + 1]; // 3

                if (currently > nextNumber) {
                    temporal = currently;    // 9
                    array[i] = nextNumber;   // 3
                    array[i + 1] = temporal; // --> array[] = {1, 6, 3, 9}
                }
            }

            isOrder = (array[j] < array[j + 1]) ? true : false;
        }      

    } while (isOrder);
}

void showArray(int *array, int dimensionArray) {
    for (int i = 0; i < dimensionArray; i++) {
        cout << array[i] << " ";
    }
}

int main(int argc, char *argv[]) {
    int array[] = {9, 1, 8, 11};

    cout << "Antes:" << endl;
    showArray(array, 4);

    ordenarArreglo(array, 4);

    cout << "\nDespues:" << endl;
    showArray(array, 4);

    return 0;
}