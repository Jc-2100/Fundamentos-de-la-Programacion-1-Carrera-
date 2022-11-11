// Programa que muestra la cantidad de bytes que ocupan los tipos de datos primitivos en C++, hay muchos más tipos de datos.
// En la gran mayoría de ejercicios usaremos estos tipos de datos.
// La funcion "sizeof(tipoDeDato)" mostrará los bytes que ocupan el tipo de dato que le pasemos.
// Los rangos de valores de cada tipo de dato están mencionados en los comentarios para ver la diferencia entre ellos.

// Program that shows the number of bytes occupied by primitive data types in C++, there are many more types of data.
// In the vast majority of exercises we will use these data types.
// The function "sizeof(dataType)" will display the bytes occupied by the data type we pass it.
// The value ranges of each data type are mentioned in the comments to see the difference between them.

#include <iostream>
using namespace std;

int main()
{
    cout << "bool: " << sizeof(bool) << " bytes" << endl; // Value range: "True" or "False"
    cout << "char: " << sizeof(char) << " bytes" << endl; // Value range: '\u0000' to '\uffff'
    cout << "int: " << sizeof(int) << " bytes" << endl; // Value range: -2147483648 to 2147483647
    cout << "double: " << sizeof(double) << " bytes" << endl; // Value range: -1.79769313486232e308 to 1.79769313486232e308

    return 0;
}