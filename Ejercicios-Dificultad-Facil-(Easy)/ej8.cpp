// Programa que muestra "True" o "False" según si un numero introducido por teclado cumple ciertas condiciones booleanas.
// Como se puede ver en el código podemos reutilizar variables y usarlas en otras condiciones como sucede con "three_digits_number" o "even".

// A program that displays "True" or "False" depending on whether a number entered on the keyboard meets certain boolean conditions.
// As can be seen in the code, we can reuse variables and use them later, as is the case with "three_digits_number" or "even".

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;

    bool value1 = false;
    bool value2 = true;
    bool even = num % 2 == 0;
    bool three_digits_number = num >= 100 && num <= 999;
    bool three_digits_number_even = three_digits_number && even;
    bool palindrome = (three_digits_number && ((num % 10) == (num / 100))); // We need to use brackets to evaluate the expressions in certain ways, otherwise it will be evaluated from left to right.
    bool divisor_100 = (num != 0) && (100 % num == 0);

    cout << boolalpha << value1 << endl <<
                        value2 << endl <<
                        even << endl <<
                        three_digits_number << endl <<
                        three_digits_number_even << endl <<
                        palindrome << endl <<
                        divisor_100 << endl;
    return 0;
}