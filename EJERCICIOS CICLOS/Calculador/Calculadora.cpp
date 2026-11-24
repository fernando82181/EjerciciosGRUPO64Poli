#include <iostream>
using namespace std;

//EJEMPLOS DE METODOS CON RETORNO
double sumar( double numero1, double numero2 ) {
    double resultado = numero1 + numero2;

    return resultado;
}
double restar( double numero1, double numero2 ){
    double resultado = numero1 - numero2;

    return resultado;
}
double multiplicar( double numero1, double numero2 ){
    double resultado = numero1 * numero2;

    return resultado;
}
double dividir( double numero1, double numero2 ){
    double resultado = numero1 / numero2;

    return resultado;
}


//EJEMPLOS DE METODOS SIN RETORNO
void imprimirResultados ( string mensaje, double resultado ) {
    cout << "El resultado de " << mensaje << " es igual a " << resultado;
}

int main()
{

    // SUMAR, RESTAR, MULTIPLICAR Y DIVIDIR
    double numero1 = 0, numero2 = 0;

    cout << "Ingrese el numero 1  ";
    cin >> numero1;

    cout << "Ingrese el numero 2  ";
    cin >> numero2;

    double resultado = sumar(numero1, numero2);
    imprimirResultados(" SUMA ", resultado );
    resultado = multiplicar(numero1, numero2);
    imprimirResultados(" MULTIPLICACIÓN ", resultado);
    //imprimirResultados ( "SUMA", sumar(numero1, numero2) );

    imprimirResultados(" RESTA ", restar(numero1, numero2));

    return 0;
}
