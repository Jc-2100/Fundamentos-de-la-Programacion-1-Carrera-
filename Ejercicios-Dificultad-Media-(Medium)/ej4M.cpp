// Primer ejercicio utilizando la sentencia switch, sentencia de selección parecida a "if-else", sin embargo esta sentencia evalua una variable "month" en este caso y muestra por pantalla si el mes tiene 30, 31 o 28 días o no es un mes válido.
// Los casos posibles de evaluacion se declaran con la forma "case x", siendo x un posible valor de la variable evaluada, si x no cumple ninguno de los casos definidos mostraría el caso default (como el "else").

// First exercise using the switch statement, a selection statement similar to "if-else", however this statement evaluates a variable "month" in this case and displays whether the month has 30, 31 or 28 days or is not a valid month.
// The possible cases of evaluation are declared in the form "case x", where x is a possible value of the evaluated variable, if x does not fulfil any of the defined cases, it will show the default case (as the "else").

#include <iostream>
using namespace std;

int main(void)
{
    int month;
    cout << "Enter a month (from 1 to 12): ";
    cin >> month;

    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: // Between cases you can do whatever you want but you have to write "break" because we dont want the switch evaluate more cases if only one fulfil the condition.
        cout << "31-day month" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30-day month" << endl;
        break;
    case 2:
        cout << "28-day month" << endl;
        break;
    default:
        cout << "Wrong month" << endl;
    }
    
    return 0;
}