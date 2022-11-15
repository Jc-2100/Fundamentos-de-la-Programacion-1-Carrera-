// Calculadora de 4 operaciones y dos operandos, introducidos por teclado, primero se decide la operación (entre suma, resta, multiplicación y division) y luego los operandos.
// Si el simbolo de operacion introducido no fuese válido, se mostraría un mensaje de error y el programa se termina.

// Calculator with 4 operations and two operands, entered by keyboard, first the operation is decided (between addition, subtraction, multiplication and division) and then the operands.
// If the operation symbol entered is invalid, an error message is displayed and the programme is terminated.

#include <iostream>
using namespace std;

int main(){
    cout << "Operation (+ - * /): " ;
    char c;
    cin >> c;
        if(!(c == '+' || c == '-' || c == '*' || c == '/')){
            cout << "ERROR: Not valid operation" << endl;
        }else{
            cout << "Operand 1: ";
            double op1;
            cin >> op1;
            cout << "Operand 2: ";
            double op2;
            cin >> op2;
            double res = 0;// Variable to save the solution.

            switch (c){// The posible cases of the switch has to be from the same type of the variable.
            case '+':
                res = op1 + op2;
                break;
            case '-':
                res = op1 - op2;
                break;
            case '*':
                res = op1 * op2;
                break;
            case '/':
                if(op2 == 0){
                    res = 0;
                    cout << "Error. Division por cero";
                }else{
                    res = op1 / op2;
                }
                break;
            }// Here we do not need a default case because all the posibilities are declared in switch, no other will reach the switch statement.
            cout << "Solution: " << res << endl;
        }
    cout << "PROGRAM ENDS :)" << endl;

    return 0;
}