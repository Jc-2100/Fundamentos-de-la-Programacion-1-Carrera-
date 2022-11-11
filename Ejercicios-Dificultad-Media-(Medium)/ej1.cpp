// Ejercicio de condición múltiple, dónde introducimos dos numeros y a través de sentencias de selección "if-else" mostramos que número es mayor.
// También hemos introducido la sentencia "else if" ya que queremos evaluar dos condiciones distintas por separado.
// Por último si ninguna de las condiciones previas se cumple ejecutariamos la última sentencia "else", este caso solo sucederá cuando los dos números son estrictamente iguales (num1 == num2).

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
    else // only condition is num1 == num2, where "==" means EQUALITY and "=" means ASIGNATION
    {
        cout << "There is no greatest number" << endl;
    }

    return 0;
}