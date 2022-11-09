// Programa que calcula si un número es par o impar.
// Primero introducimos un numero y al pulsar la tecla Enter nos mostrará "True" si es par o "False" si no lo es.
// Añadimos una nueva variable, "boolalpha" es una variable de estado que nos mostrará por pantalla el valor de un booleano como "True" o "False"
// si la omitimos, "is_even" sería o '1' (True) o '0' (False).

// Program that calculates whether a number is even or odd.
// First we enter a number and when we press the Enter key it will show "True" if it is even or "False" if it is not.
// We add a new variable, "boolalpha" is a status variable that will display the value of a Boolean as "True" or "False",
// if we omit it, "is_even" would be either '1' (True) or '0' (False).
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int x1;
    cin >> x1;
    bool is_even = (x1 % 2) == 0; // One-line initialization and assignment
    cout << boolalpha << is_even;
    return 0;
}