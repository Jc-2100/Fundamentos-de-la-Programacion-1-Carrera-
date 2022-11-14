// Ejercicio que combina entrada y salida de datos con operaciones aritmeticas y sentencias de selección para crear una calculadora de precio de unidades de un producto.
// Digamos que quieres calcular cuanto te costaría una serie de productos, sabiendo su precio por unidad y si tiene Iva o no, sabrías lo que tienes que pagar.
// Ademas si el precio con IVA supera "300", se aplicaría un descuento de "5%", el cual tambien podría ser cambiado a gusto del usuario.

// Exercise combining data input and output with arithmetic operations and selection statements to create a product unit price calculator.
// Let's say you want to calculate how much a series of products would cost you, knowing their unit price and whether they have VAT or not, you would know what you have to pay.
// Moreover, if the price with VAT exceeds "300$", a discount of "5%" will be applied, which can also be changed at the user's discretion.

#include <iostream>
using namespace std;


const double DISCOUNT = 0.05; // you can change this constant if you want to apply any other discount

int main()
{
    int units;
    double price_per_unit;
    double finalPrice;
    double vat;
    cout << "Enter the number of units purchased: ";
    cin >> units;
    cout << "Enter the price of one unit: ";
    cin >> price_per_unit;
    cout << "Enter the vat(if there is no Vat, enter 0): ";
    cin >> vat;

    double totalPriceNoVat = units*price_per_unit;
    if(vat > 0){ // Depending the user's input, the vat will be applied or not
        double totalPriceWithVat = totalPriceNoVat + totalPriceNoVat*(vat/100);
        if(totalPriceWithVat >= 300)
        {
            cout << "5% discount applies" << endl;
            finalPrice = totalPriceWithVat - totalPriceWithVat*DISCOUNT;
        }else{
            finalPrice = totalPriceWithVat;
        }
    }else{
        finalPrice = totalPriceNoVat;
    }

    cout << "The total price to be paid is: " << finalPrice << " $";

    return 0;
}