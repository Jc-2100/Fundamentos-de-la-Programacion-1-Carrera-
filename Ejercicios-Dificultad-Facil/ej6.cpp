// Programa que transforma una cadena de caracteres de minusculas a mayusculas.
// No hace falta saber el código ASCII para realizar este programa (aunque se podría hacer).
// Por último mostraremos la cadena con el método "char(dato)".

// Program that transforms a string of characters from lower case to upper case.
// It is not necessary to know ASCII code to do this program.
// Finally we will display the string with the "char(data)" method.

#include <iostream>
using namespace std;

int main(void)
{
    char c1, c2, c3, c4;
    cout << "Introduzca una palabra de 4 letras minusculas: ";
    cin >> c1 >> c2 >> c3 >> c4;

    int mayusC1 = 'A' + (c1 - 'a'); // We know that letters in ASCII are ordered, so we can calculate de distance between 'a' and c1 (letter entered by keyboard)
    int mayusC2 = 'A' + (c2 - 'a'); // So now we can sum that distance to 'A' and we get the c1 in uppercase
    int mayusC3 = 'A' + (c3 - 'a');
    int mayusC4 = 'A' + (c4 - 'a');

    cout << "La palabra [" << c1 << c2 << c3 << c4 << "] transformada es ["
            << char(mayusC1) << char(mayusC2) << char(mayusC3) << char(mayusC4) << "]" << endl;