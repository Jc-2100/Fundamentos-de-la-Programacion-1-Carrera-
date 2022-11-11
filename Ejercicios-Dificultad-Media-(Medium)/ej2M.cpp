// Primer caso con una condición doble como se puede ver dentro del primer "if", tenemos por un lado 'a' <= letra <= 'z' y por el otro 'A' <= letra <= 'Z'.
// Es decir o el caracter introducido es una letra mayúscula o es una letra minúscula. Usamos el operador "||" ya que queremos que cuando una de las dos sea TRUE, entremos al "if" (Operador OR).
// Sin embargo dentro de cada una de las dos condiciones mencionadas usamos el operador "&&" entre paréntesis porque queremos que la letra este en el rango de 'a' a 'z' obligatoriamente (Operador AND).

// First case with double condition as you can see inside the first "if", we have on the one hand 'a' <= letter <= 'z' and on the other hand 'A' <= letter <= 'Z'.
// That is, either the character entered is an uppercase letter or it is a lowercase letter. We use the "||" operator because we want that when one of the two is TRUE, we enter the "if" (OR operator).
// However, within each of the two conditions mentioned above, we use the operator "&&" in brackets because we want the letter to be in the range 'a' to 'z' (AND operator).

#include <iostream>
using namespace std;

int main(void)
{
    char letter;
    cout << "Enter a character: ";
    cin >> letter;

    if(('a' <= letter && letter <= 'z') || ('A' <= letter && letter <= 'Z')) // two conditions 
    {
        cout << "Is a letter" << endl;
    }
    else if('0' <= letter && letter <= '9') // We check if "letter" is a number
    {
        cout << "Is a number" << endl;
    }
    else // otherwise an error will be displayed
    {
        cout << "Error";
    }
    return 0;
}