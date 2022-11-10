// Programa que transforma una cadena de caracteres de minúsculas a mayúsculas.
// No hace falta saber el código ASCII para realizar este programa.
// Por último mostraremos la cadena con el método "char(dato)".

// Program that transforms a string of characters from lower case to upper case.
// It is not necessary to know ASCII code to do this program.
// Finally we will display the string with the "char(data)" method.

#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4;
    cout << "Enter a word of 4 lower case letters: ";
    cin >> c1 >> c2 >> c3 >> c4;

    int mayusC1 = 'A' + (c1 - 'a'); // We know that letters in ASCII are ordered, so we can calculate de distance between 'a' and c1 (letter entered by keyboard)
    int mayusC2 = 'A' + (c2 - 'a'); // So now we can sum that distance to 'A' and we get the c1 in uppercase
    int mayusC3 = 'A' + (c3 - 'a');
    int mayusC4 = 'A' + (c4 - 'a');

    cout << "The word [" << c1 << c2 << c3 << c4 << "] is transformed into ["
            << char(mayusC1) << char(mayusC2) << char(mayusC3) << char(mayusC4) << "]" << endl;
    return 0;
}