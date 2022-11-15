// Este programa es una variante de "ej5M.cpp", fijate en el codigo e intenta comprender su funcionamiento y la/las diferencias con respecto al anterior.

// This program is a variant of "ej5M.cpp", look at the code and try to understand how it works and the difference(s) from the previous one.

#include <iostream>
using namespace std;

int main(){
    cout << "Operation (1, 2, 3, 4): " ;
    int c;
    cin >> c;
        if(!(c == 1 || c == 2 || c == 3 || c == 4)){
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
            case 1:
                res = op1 + op2;
                break;
            case 2:
                res = op1 - op2;
                break;
            case 3:
                res = op1 * op2;
                break;
            case 4:
                if(op2 == 0){
                    res = 0;
                    cout << "Error. Division by zero" << endl;
                }else{
                    res = op1 / op2;
                }
                break;
            }// Here we do not need a default case because all the posibilities are declared in switch, no other will reach the switch statement.
            cout << "Solution: " << res << endl;
            cout << endl;
            if(c == 4 && op2 == 0){
                cout << "Error. Division by zero" << endl;
            }else{
                cout << "Now looking at the solution, what do you think was the operation made? (+ - * /): ";
                char o;
                cin >> o;
                if((c == 1 && o == '+') || (c == 2 && o == '-') || (c == 3 && o == '*') || (c == 4 && o == '/')){
                    cout << "Good job! You are right" << endl;
                }else{
                    cout << "Sorry! That is not the answer." << endl;
                    cout << "The answer is ";
                    switch(c){
                        case 1:
                            cout << "(+)" << endl;
                            break;
                        case 2:
                            cout << "(-)" << endl;
                            break;
                        case 3: 
                            cout << "(*)" << endl;
                            break;
                        case 4:
                            cout << "(/)" << endl;
                            break;
                    }
                }
            }
        }
    cout << "PROGRAM ENDS :)" << endl;

    return 0;
}