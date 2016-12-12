#include <iostream>

using namespace std;

int main(){

    float peso, altura, imc = 0;

    cout << "Ingrese el peso (Kg): "; cin >> peso;
    cout << "Ingrese la altura (m): "; cin >> altura;

    imc = peso/(altura*altura);

    cout << "El IMC es: " << imc << "Kg/ m2" << endl;

    cout << "Riesgo: ";

    if(imc >= 18.5 && imc <= 24.9){
        cout << "Promedio" << endl;
    } else
    if(imc >= 25 && imc <= 29.9){
        cout << "Aumentado" << endl;
    } else
    if(imc >= 30 && imc <= 34.9){
        cout << "Moderado" << endl;
    } else
    if(imc >= 35 && imc <= 39.9){
        cout << "Severo" << endl;
    } else
    if(imc >= 40){
        cout << "Muy severo" << endl;
    } else {
        cout << "Los datos no son correctos" << endl;
    }
}
