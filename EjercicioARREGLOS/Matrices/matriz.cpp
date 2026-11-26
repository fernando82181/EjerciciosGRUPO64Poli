#include <iostream>
using namespace std;

int main()
{

    int filas = 10;
    int columnas = 11;

    int matriz[filas][columnas];
int abc = 1;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = abc ;
            abc = abc + 2;
        }
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "  " << matriz[i][j];
        }
        cout << endl;
    }

    

    return 0;
}