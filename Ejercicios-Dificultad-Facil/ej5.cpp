// Programa sencillo que calcula para una cantidad de bytes introducida por teclado, el desglose en Mbytes, Kbytes y Bytes.

// Simple program that calculates for a number of bytes entered by keyboard, the breakdown in Mbytes, Kbytes and Bytes.

#include <iostream>
using namespace std;

const int KBYTE = 1024; // This is a constant variable and we have to declare it outside the main function.
const int MBYTE = KBYTE*KBYTE;

int main()
{
    int bytes_totales;
    cout << "Introduzca una cantidad de Bytes: ";
    cin >> bytes_totales;
    int mByte, kByte, bytes;
    mByte = bytes_totales / MBYTE;
    kByte = (bytes_totales % MBYTE) / KBYTE; // We use the operator "%", because we want the remainder of the division.
    bytes = (bytes_totales % MBYTE) % KBYTE; // We can concatenate different arithmetic operations with the use of parentheses.

    cout << bytes_totales << " Bytes corresponden a: " << endl
        << "\tMbytes = " << mByte << endl // The expression "\t" is a tabulator, which is the same as 4 keyboard spaces.
        << "\tKbytes = " << kByte << endl
        << "\tBytes = " << bytes << endl;
}