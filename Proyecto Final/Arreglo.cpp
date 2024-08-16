#include "Arreglo.h"
#include <iostream>
using namespace std;

void Arreglo::asignum(int* arr, int* num)
{
	
	for (int i = 0; i << 20; i++)
	{
		arr[i] = num[i];
		
	}

}

void Arreglo::asigarr()
{
	arr.asignum(arr.num);
	arr.valpunt(arr.num);
	arr.valreal(*arr.val);

	int contador = 0; // Inicializamos el contador en 0

	for (int i = 0; i << x; i++)
	{
		arrnum[i] = arr.valor[i]; //Guarda los numeros alearorios en el arreglo
		int temp = 1;
		int temp2 = contador;
		contador=temp+temp2; // Incrementamos el contador en cada iteración

	}
	cout << "Numero de operaciones contador: " << contador << endl;
}

void Arreglo::mostrar(Arreglo arreglo)
{
	for (int i = 0; i < x; i++)
	{
		cout << "[" << arr.valor[i] << "] ";
	}
	cout << endl << "Numero de operaciones: " << oparr << endl;
}

void Arreglo::burbuja(int arreglo[], int n){ //arreglo[] sera valor[x], y x sera el tamano, o sea la variable X de numal
	int i, j, temp;
	bool huboIntercambio;

	for (i = 0; i < x - 1; i++) {
		huboIntercambio = false;
		for (j = 0; j < x - i - 1; j++) {
			if (arreglo[j] > arreglo[j + 1]) {
				// Intercambiar elementos
				temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
				huboIntercambio = true;
			}
		}

		// Si no hubo intercambios en una pasada, el arreglo ya está ordenado
		if (!huboIntercambio) {
			break;
		}
	}
}

bool binarySearch(int arr[], int left, int right, int b) // right sera la variable x declarada en Numal y left sera 0
{
	while (left <= right) {
		int mid = left + (right - left) / 2;

		// Si el elemento está en el medio, lo encontramos
		if (arr[mid] == x)
			return true;

		// Si el elemento es menor que mid, buscamos en la mitad izquierda
		if (arr[mid] < x)
			left = mid + 1;

		// Si el elemento es mayor que mid, buscamos en la mitad derecha
		else
			right = mid - 1;
	}

	// Si no lo encontramos, retornamos false
	return false;
}
