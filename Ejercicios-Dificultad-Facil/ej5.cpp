// Programa sencillo que calcula para una cantidad de bytes introducida por teclado, el desglose en Mbytes, Kbytes y Bytes.

// Simple program that calculates for a number of bytes entered by keyboard, the breakdown in Mbytes, Kbytes and Bytes.

#include <iostream>
using namespace std;

const int KBYTE = 1024; // This is a constant variable and we have to declare it outside the main function.
const int MBYTE = KBYTE*KBYTE;

int main()
{
    int total_bytes;
    cout << "Enter a number of bytes: ";
    cin >> total_bytes;
    int mByte, kByte, bytes;
    mByte = total_bytes / MBYTE;
    kByte = (total_bytes % MBYTE) / KBYTE; // We use the operator "%", because we want the remainder of the division.
    bytes = (total_bytes % MBYTE) % KBYTE; // We can concatenate different arithmetic operations with the use of parentheses.

    cout << total_bytes << " Bytes equals to: " << endl
        << "\tMbytes = " << mByte << endl // The expression "\t" is a tabulator, which is the same as 4 keyboard spaces.
        << "\tKbytes = " << kByte << endl
        << "\tBytes = " << bytes << endl;
}