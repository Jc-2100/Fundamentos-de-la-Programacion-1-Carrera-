// Ejercicio introductorio a la inicialización de datos simples y la entrada de datos por teclado.
// Creamos una variable entera representado por "int" con nombre n1. Luego mostramos por pantalla una frase con "cout".
// Como dijimos anteriormente usamos la librería estándar "iostream", una de sus funciones es "cin" (Console In).
// Esta función dejará al programa en espera hasta que el usuario introduzca por teclado algun caracter (en este caso un numero entero) y pulse Enter.
// Por último mostramos por pantalla una frase y el valor del número que hemos introducido.

// Introductory exercise on simple data initialisation and keyboard input.
// We create an integer variable represented by "int" with name n1. Then we display on the screen a sentence with "cout".
// As we said before we use the standard library "iostream", one of its functions is "cin" (Console In).
// This function will put the program on hold until the user enters a character (in this case an integer) and presses Enter.
// Finally, we display a sentence and the value of the number we have introduced.

#include <iostream>
using namespace std;

int main()
{
    int n1;
    cout << "Introduce an integer number: ";
    cin >> n1;

    cout << "The value of the number is: " << n1 << endl; // "endl" = salto de línea(line break)
}