// Ejercicio de condición múltiple, dónde introducimos dos numeros y a través de sentencias de selección "if-else" mostramos que número es mayor.
// También hemos introducido la sentencia "else if" ya que queremos evaluar dos condiciones distintas por separado pero con un orden establecido.
// Por último si ninguna de las condiciones previas se cumple ejecutariamos la última sentencia "else", este caso solo sucederá cuando los dos números son estrictamente iguales (num1 == num2).


// Multiple condition exercise, where we introduce two numbers and through "if-else" selection sentences we show which number is greater.
// We have also introduced the "else if" statement because we want to evaluate two different conditions separately but with an established order.
// Finally, if none of the previous conditions are fulfilled, we will execute the last else statement, which will only happen when the two numbers are strictly equal (num1 == num2).

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if(num1 > num2) // (i.e. num1 = 5 , num2 = 1)
    {
        cout << "The greatest number is: " << num1 << endl;
    }
    else if(num2 > num1) // (i.e. num1 = 1 , num2 = 5)
    {
        cout << "The greatest number is: " << num2 << endl;
    }
    else // we will reach here if num1 == num2, where "==" means EQUALITY and "=" means ASIGNATION
    {
        cout << "There is no greatest number" << endl;
    }

    return 0;
}