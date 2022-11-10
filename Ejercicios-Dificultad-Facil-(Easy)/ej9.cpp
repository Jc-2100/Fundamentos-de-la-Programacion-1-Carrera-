// Ejercicio final de dificultad fácil e introductorio a la sección de nivel medio.
// Primer ejercicio que presenta las sentencias de selección, estructura utilizada para ejecutar diferentes salidas de un programa dependiendo de una condición determinada.
// En otras palabras, evaluamos una condición (p.e. "num > 0"); de ser verdadera ejecutamos cierto código y si es falso podemos o no ejecutar otro código.

// Final exercise of easy difficulty and introductory to the intermediate level section.
// First exercise presenting selection statements, a structure used to execute different outputs of a program depending on a given condition.
// In other words, we evaluate a condition (i.e. "num > 0"); if true we execute some code and if false we may or may not execute other code.

#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cout << "Introduzca un numero entero: ";
    cin >> num;

    if(num < 0) // Evaluation of the condition
    {
        cout << "El numero " << num << " si es negativo" << endl; // If "num < 0" is True, we display this part.
    }
    else // This part could be omited, that depends on what we want.
    {
        cout << "El numero " << num << " no es negativo" << endl; // In any other case we display this part.
    }
}