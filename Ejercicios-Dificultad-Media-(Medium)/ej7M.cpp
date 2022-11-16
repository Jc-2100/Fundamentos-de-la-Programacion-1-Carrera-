#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Introduce un valor de teclado: ";
    cin >> N;

    for (int i = 0; i < N; i++){// Conditions of the for-loop
        cout << i << " "; // Code that will be executed intil the conditions are fulfilled
    }

    cout << endl;
    
    for(int i = N-1; i >= 0; i--){
        cout << i << " ";
    }

    return 0;
}