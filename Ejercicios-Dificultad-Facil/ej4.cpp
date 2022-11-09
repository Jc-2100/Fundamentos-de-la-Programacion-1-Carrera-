// Ejercicio con tipo de dato "char".
// Vamos a cambiar 4 letters introducidas por teclado por la siguinte letter en el código ASCII (p.e. r -> (r+1) -> s).
// La funcion "char(variable)" convierte la "variable" (suele ser un numero) a tipo char, usamos este método ya que si sumamos letter+1 nos dará un número, el cual queremos convertir a tipo char.

// Exercise with data type "char".
// We are going to change 4 letters entered by keyboard to the next letter in the ASCII code (i.e. r -> (r+1) -> s).
// The function "char(variable)" converts the "variable" (usually a number) to char type, we use this method because if we add letter+1 it will give us a number, which we want to convert to char type.

#include <iostream>
using namespace std;

int main()
{
    char letter1, letter2, letter3, letter4;
    cout << "Enter a 4-letter word: ";
    cin >> letter1 >> letter2 >> letter3 >> letter4; // We can concatenate multiple keyboard entries.

    cout << "The word [" << letter1 << letter2 << letter3 << letter4 << "] is transformed into ["
            << char(letter1+1)  << char(letter2+1) << char(letter3+1) << char(letter4+1) << "]" << endl;
}