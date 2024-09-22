#include <iostream>
using namespace std;

/*Hacer un programa para ingresar una lista de 10 n�meros enteros, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates� considerar la primera aparici�n.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20. Listar� M�ximo 35 Posici�n 7.
Ejemplo B: 5, -10, 2, 8, 25, 13, 55, -8, 55, 9. Listar� M�ximo 55 Posici�n 7.
Ejemplo C: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Listar� M�ximo -6 Posici�n 8.
El tercer ejemplo demuestra que NO SIEMPRE en una lista de n�meros el m�ximo es un positivo.
*/


int main() {

 int valor;
 int posicion;
 int maximo;

 cout << "Ingrese el valor" << endl;
 cin >> valor;
 maximo = valor;
 posicion = 1;

 for (int i = 2; i <= 10; i++)
 {
     cin >> valor;
     if (valor > maximo)
        {
            maximo = valor;
            posicion = i;
        }
 }

 cout << "Maximo " << maximo << " Posicion " << posicion << " ." << endl;


 	return 0;
}
