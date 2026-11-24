#include<iostream>
using namespace std;

//validacion de un numero mayor a cero

bool validarNumero(double numero){
    if (numero <= 0){
     return false;   
    }else{
        return true;
    }
}

double solicitarNumeroMayorCero(){
    double numero = 0;

    do
    {
        cout << "Ingrese un numero mayor que cero";
        cin >> numero;
    } while (numero <= 0);
    
    return numero;
}




int main(){
    solicitarNumeroMayorCero ();




    return 0;
}