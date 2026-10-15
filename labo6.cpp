#include <iostream>
using namespace std;
int main(){ 
    int numero = 0;
    int suma = 0;
    int cantidad = 0;
    cout << "Ingrese numero que desea evaluar : ";
    cin >> numero;

    for(int i = 1; i <= numero; i+=2 ){
        suma +=i;
        cantidad++;
    }
    cout << "La suma de los numeros impares es: " << suma << endl;
    cout << "Ingrese la cantidad de numeros impares es  : ";
    return 0;
}