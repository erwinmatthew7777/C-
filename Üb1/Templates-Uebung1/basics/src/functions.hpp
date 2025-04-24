#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

/**
 * @file functions.hpp
 * @autor Tu Nombre
 * @brief Este archivo de encabezado contiene prototipos de funciones y una enumeración
 * que se utilizará para imprimir figuras alineadas a la izquierda o a la derecha.
 *
 * Este archivo define:
 * - Una enumeración `Direction` para especificar la alineación de la figura.
 * - Varias funciones para imprimir espacios y estrellas para crear la figura.
 */

#include <iostream> // Incluir para funcionalidad de entrada/salida

/**
 * @enum Direction
 * @brief Una enumeración para definir la dirección de alineación al imprimir las estrellas.
 *
 * La enumeración `Direction` tiene dos valores posibles:
 * - Left: Alinea la figura a la izquierda.
 * - Right: Alinea la figura a la derecha.
 */
enum Direction {
    Left,  /**< Alinea la figura a la izquierda */
    Right  /**< Alinea la figura a la derecha */
};

/**
 * @brief Imprime espacios para la alineación a la derecha.
 *
 * Esta función imprime una cantidad de espacios antes de imprimir las estrellas.
 * Se utiliza para alinear las estrellas a la derecha.
 *
 * @param espacios La cantidad de espacios que se deben imprimir.
 */
void printSpaces(int espacios);

/**
 * @brief Imprime una línea de estrellas con la alineación especificada.
 *
 * Esta función imprime una línea de estrellas, y dependiendo de la alineación
 * especificada por la enumeración `Direction`, puede agregar espacios a la izquierda
 * para alinear las estrellas a la derecha.
 *
 * @param n El número de estrellas a imprimir.
 * @param ancho El ancho total de la línea.
 * @param dir La dirección de alineación (Left o Right).
 */
void printStars(int n, int ancho, Direction dir);

/**
 * @brief Imprime toda la figura de estrellas, alineada según la dirección especificada.
 *
 * Esta función imprime una figura que primero desciende de `n` estrellas hasta 1 estrella,
 * y luego asciende de 2 estrellas hasta `n`. La figura se alinea a la izquierda o derecha
 * según lo especificado.
 *
 * @param n El número de estrellas en la primera y última fila.
 * @param dir La dirección de alineación (Left o Right).
 */
void printFigure(int n, Direction dir);

#endif /* FUNCTIONS_HPP_ */
