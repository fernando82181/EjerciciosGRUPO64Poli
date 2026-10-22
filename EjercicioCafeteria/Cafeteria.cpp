#include <iostream>
using namespace std;

int main()
{

    string productos = "\n 1. CAFÉ "
                       "\n 2. JUGO NATURAL "
                       "\n 3. SANDWICH "
                       "\n 4. EMPANADA "
                       "\n 5. FINALIZAR JORNADA \n";
    int codigoProducto = 0;
    int cantidadProdutos = 0, numeroTransacciones = 0, mayor = 0, menor = 0;
    double subtotal = 0, precioProduto = 0;
    // CONTADORES
    int contadorCafe = 0, contadorJugo = 0, contadorSandwich = 0, contadorEmpanada = 0;

    // BANDERAS
    bool banderaCafe = false, banderaJugo = false, banderaSandwich = false, banderaEmpanada = false;

    do
    {
        cout << productos;
        cin >> codigoProducto;
        cout << "Ingrese la cantidad de produtos a comprar: ";
        cin >> cantidadProdutos;
        numeroTransacciones++;

        switch (codigoProducto)
        {
        case 1:
            precioProduto = 2000;
            contadorCafe = cantidadProdutos + contadorCafe;
            break;

        case 2:
            precioProduto = 4000;
            contadorJugo = cantidadProdutos + contadorJugo;

            break;
        case 3:
            precioProduto = 7000;
            contadorSandwich = cantidadProdutos + contadorSandwich;
            break;

        case 4:
            precioProduto = 2500;
            contadorEmpanada = cantidadProdutos + contadorEmpanada;
            break;
        case 5:

            // FIN JORNADA

            break;

        default:
            cout << "Opcion no valida";
            break;
        }

        if (codigoProducto < 5 && codigoProducto > 0)
        {

            if (cantidadProdutos >= 5)
                subtotal = subtotal + precioProduto * cantidadProdutos * 0.9;

            else
                subtotal = subtotal + precioProduto * cantidadProdutos;
        }

    } while (codigoProducto != 5);

    if (mayor < contadorEmpanada)
    {
        mayor = contadorEmpanada;
        banderaEmpanada = true;
    }
    else if (mayor < contadorSandwich)
    {
        mayor = contadorSandwich;
        banderaSandwich = true;
    }
    else if (mayor < contadorJugo)
    {
        banderaJugo = true;
        mayor = contadorJugo;
    }
    else if (mayor < contadorCafe)
    {
        banderaCafe = true;
        mayor = contadorCafe;
    }

    cout << "Total de transacciones: " << numeroTransacciones << endl;
    cout << "Total de cafe vendido: " << contadorCafe << endl;
    cout << "Total de jugo vendido: " << contadorJugo << endl;
    cout << "Subtotal de produtos: " << subtotal << endl;

    return 0;
}