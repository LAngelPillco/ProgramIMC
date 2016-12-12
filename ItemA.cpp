#include <iostream>

using namespace std;

int main(){

    float peso, altura, imc = 0;

    cout << "Ingrese el peso (Kg): "; cin >> peso;
    cout << "Ingrese la altura (m): "; cin >> altura;

    imc = peso/(altura*altura);

    cout << "El IMC es: " << imc << "Kg/ m2" << endl;
}
