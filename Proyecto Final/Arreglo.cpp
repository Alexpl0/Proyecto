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
	cout << "Arreglo NO Ordenado: ";
	for (int i = 0; i < x; i++)
	{
		cout << "[" << arr.num[i] << "] ";
	}
	//cout << "Numero de operaciones contador: " << contador << endl;
}

void Arreglo::mostrar(Arreglo arreglo)
{
	for (int i = 0; i < x; i++)
	{
		cout << "[" << arr.num[i] << "] ";
	}
	//cout << endl << "Numero de operaciones: " << oparr << endl;
}

void Arreglo::burbuja(int arreglo[], int n){ //arreglo[] sera valor[x], y x sera el tamano, o sea la variable X de numal
	int i, j, temp;
	bool huboCambio;

	for (i = 0; i < n - 1; i++) {
		huboCambio = false;

		for (j = 0; j < n - i - 1; j++) {
			
			if (arreglo[j] > arreglo[j + 1]) {
				// Intercambiar elementos
				temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
				huboCambio = true;
			}
		}

		// Si no hubo cambios en una pasada, el arreglo ya está ordenado
		if (!huboCambio) {
			break;
		}
	}
	for (int i = 0; i < x; i++)
	{
		cout << endl;
		cout << "[" << arr.valor[i] << "] ";
		cout << endl;
	}
	//cout << endl << "Numero de operaciones: " << oparr << endl;
	
}

bool Arreglo::binarySearch(int arr[], int left, int right, int b){
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

int Arreglo::busqueda_fuerza_bruta(int arreglo[], int tamano, int valor_buscado){

	int busqresfb = 1;
	for (int i = 0; i < tamano; i++) {
		if (arreglo[i] == valor_buscado) {
			cout << "Se ha encontrado el valor:  " << valor_buscado << endl;
			cout << "El numero de operaciones realizadas  por Fuerza Bruta fue: " << busqresfb << endl << endl;
			return i; // Si encontramos el valor, retornamos su índice
		}
		busqresfb++;
	}
	cout << "No ha encontrado el valor:  " << valor_buscado << endl;
	cout << "El numero de operaciones realizadas  por Fuerza Bruta fue: " << x << endl << endl;
	return -1; // Si no encontramos el valor, retornamos -1
}
