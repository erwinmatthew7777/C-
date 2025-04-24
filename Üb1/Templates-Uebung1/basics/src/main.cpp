#include <iostream>  // Librería para comunicación
#include <limits>    // Para limpiar el buffer
#include <string>    // Para leer la dirección como texto
#include "functions.hpp" // Incluir el header con las funciones

using namespace std; // Para no tener que escribir std:: al inicio de cada función

// Función principal
int main() {
    int n; // Declarar n, para poder pedirlo

    // Mostrar texto, para pedir la cantidad de estrellas
    cout << "Cuantas estrellas quieres en la primera y ultima linea? ";
    cin >> n; // Recibir un int y guardarlo en n

    // Verificar si la entrada falló (no es un entero)
    if (cin.fail()) {
        cout << "Sos opa querido, la cagaste para variar." << endl;
        cin.clear(); // Limpiar el error
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer
        return 1; // Salir del programa
    }

    string dirInput;     // Variable para leer la dirección como texto
    Direction dir = Left; // Dirección por defecto

    // Pedir dirección
    cout << "Las vas a querer a la derecha o izquierda? (solo escribelo: 'right' o 'left') ";
    cin >> dirInput;

    // Convertir la entrada a minúsculas
    for (auto& c : dirInput) c = tolower(c);

    // Determinar la dirección a partir del texto
    if (dirInput == "right") {
        dir = Right;
    } else if (dirInput == "left") {
        dir = Left;
    } else {
        cout << "Dirección inválida. Se usará 'left' por defecto." << endl;
    }

    // Mensaje antes de imprimir la figura
    cout << "Aca tenes, choquito:" << endl;

    // Llamar la función con el n y la dirección dada
    printFigure(n, dir);

    return 0;
}
