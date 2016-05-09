// Analisis
// Entradas: Millas recorridas
// Proceso: Calcular kms a traves de multiplicar millas * 1.6
// Salidas: Cantidad de kms equivalentes
// Diseño:
//  Pedir al ususario la distancia en millas
//  Leer millas
//  Kilometros = millas * 1.6
//  Mostrar "los kilometros equivalentes son", kilometros
// fin
//
// Casos de uso
// Caso 1:
// Millas = 100
// Kilometros = 160

#include <iostream>

using namespace std;

int main()
double dMillas, dKM;
{
    cout << "Ingrese el numero de millas: "<< /n;
    cin >> dMillas;
    dKM = dMillas * 1.6;
    cout << "Los kilometros son: " << dKM;
    return 0;
}
