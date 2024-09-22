#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo y el m�nimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listar� M�ximo 42 M�nimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listar� M�ximo -5 M�nimo -42.
Observe que los tres ejemplos dejan en claro que la suposici�n de que el m�ximo �seguramente� es un positivo y el m�nimo �seguramente� es un negativo, queda totalmente descartada.
*/

int main() {


    int valor = 0;

    int mayor = 0;
    int menor = 0;

    cout << "Ingrese 10 numeros, le informaremos el maximo" << endl;
    cin >> valor;
    mayor = valor;
    menor = valor;

    for (int i = 1; i < 10; i++)
    {
        cin >> valor;
        if (valor > mayor)
            mayor = valor;
        else if (valor < menor)
            menor = valor;
    }


    cout << "El numero de mayor valor es " << mayor << endl;
    cout << "El numero de menor valor es " << menor << endl;



 	return 0;
}
