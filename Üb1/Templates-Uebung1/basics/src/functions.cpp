#include <iostream>  // Librería para la comunicación
#include "functions.hpp" // Incluir el header para las declaraciones de las funciones

using namespace std;

// Función para imprimir espacios. Se usa para la alineación a la derecha
void printSpaces(int espacios) {
    for (int i = 0; i < espacios; i++) {
        cout << " ";
    }
}

// Función para imprimir una línea de estrellas, con alineación según la dirección
void printStars(int n, int ancho, Direction dir) {
    if (dir == Direction::Right) {
        // Imprimir espacios para empujar las estrellas a la derecha
        printSpaces(ancho - n);
    }
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

// Función para imprimir la figura completa, alineada según el valor de dir
void printFigure(int n, Direction dir) {
    // Parte descendente: de n hasta 1
    for (int i = n; i >= 1; i--) {
        printStars(i, n, dir);
    }

    // Parte ascendente: de 2 hasta n
    for (int i = 2; i <= n; i++) {
        printStars(i, n, dir);
    }
}
