// Ejercicio con tipo de dato "char".
// Vamos a cambiar 4 letras introducidas por teclado por la siguinte letra en el código ASCII (p.e. r -> (r+1) -> s).
// La funcion "char(variable)" convierte la "variable" (suele ser un numero) a tipo char, usamos este método ya que si sumamos letra+1 nos dará un número, el cual queremos convertir a tipo char.

// Exercise with data type "char".
// We are going to change 4 letters entered by keyboard to the next letter in the ASCII code (i.e. r -> (r+1) -> s).
// The function "char(variable)" converts the "variable" (usually a number) to char type, we use this method because if we add letter+1 it will give us a number, which we want to convert to char type.

#include <iostream>
using namespace std;

int main()
{
    char letra1, letra2, letra3, letra4;
    cout << "Introduzca una palabra de 4 letras: ";
    cin >> letra1 >> letra2 >> letra3 >> letra4; // We can concatenate multiple keyboard entries.

    cout << "La palabra [" << letra1 << letra2 << letra3 << letra4 << "] transformada es ["
            << char(letra1+1)  << char(letra2+1) << char(letra3+1) << char(letra4+1) << "]" << endl;
}