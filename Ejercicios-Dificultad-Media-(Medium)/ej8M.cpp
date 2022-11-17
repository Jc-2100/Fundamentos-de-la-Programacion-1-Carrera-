#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N;
    int i = 0;

    while(i <= N){
        cout << i << " ";
        i++;
    }
    
    cout << endl;
    i = N;

    while(i >= 0){
        cout << i << " ";
        i--;
    }

    return 0;
}