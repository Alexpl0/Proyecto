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
	int w = 0;
	int i = 0;
	do {
		arrnum[i] = arr.valor[i]; //Guarda los numeros alearorios en el arreglo
		//cout << "Numero a Copiar: " << arr.valor[i] << endl;
		//cout << "Numero Copiado: " << arrnum[i] << endl;
		w++;
		i++;
	} while (w != x);

	for (int i = 0; i << x; i++)
	{
		arrnum[i] = arr.valor[i]; //Guarda los numeros alearorios en el arreglo
		cout << "Numero a Copiar: " << arr.valor[i] << endl;
		cout << "Numero Copiado: " << arrnum[i] << endl;

	}
	//cout << "Despues de entrar al For" << endl;

	cout << endl;
	//cout << "Numero de operaciones contador: " << contador << endl;
}

void Arreglo::mostrar(Arreglo arreglo)
{
	for (int i = 0; i < x; i++)
	{
		cout << "[" << arrnum[i] << "] ";
	}
	//cout << endl << "Numero de operaciones: " << oparr << endl;
}

void Arreglo::burbuja(Arreglo arreglo, int n){ //arreglo[] sera valor[x], y x sera el tamano, o sea la variable X de numal
	int i, j, temp;
	bool huboCambio;

	for (i = 0; i < n - 1; i++) {
		huboCambio = false;

		for (j = 0; j < n - i - 1; j++) {
			
			if (arreglo.arr.num[j] > arreglo.arr.num[j + 1]) {
				// Intercambiar elementos
				temp = arreglo.arr.num[j];
				arreglo.arr.num[j] = arreglo.arr.num[j + 1];
				arreglo.arr.num[j + 1] = temp;
				huboCambio = true;
			}
		}

		// Si no hubo cambios en una pasada, el arreglo ya está ordenado
		if (!huboCambio) {
			break;
		}
	}

	cout << endl;
	for (int i = 0; i < x; i++)
	{
		cout << "[" << arreglo.arr.num[i] << "] ";
	}

	cout << endl;
	//cout << endl << "Numero de operaciones: " << oparr << endl;
	
}

bool Arreglo::binarySearch(int arr[], int left, int right, int b){
	while (left <= right) {
		int mid = left + (right - left) / 2;

		// Si el elemento está en el medio, lo encontramos
		if (arr[mid] == x) {
			oparr2++;
			return true;
		}

		// Si el elemento es menor que mid, buscamos en la mitad izquierda
		if (arr[mid] < x) {
			oparr2++;
			left = mid + 1;
		}

		// Si el elemento es mayor que mid, buscamos en la mitad derecha
		else {
			oparr2++;
			right = mid - 1;
		}
	}

	// Si no lo encontramos, retornamos false
	return false;
}

int Arreglo::busqueda_fuerza_bruta(int arreglo[], int tamano, int valor_buscado){

	int busqresfb = 1;
	for (int i = 0; i < tamano; i++) {
		if (arreglo[i] == valor_buscado) {
			//cout << "Se ha encontrado el valor:  " << valor_buscado << endl;
			//cout << "El numero de operaciones realizadas  por Fuerza Bruta fue: " << busqresfb << endl << endl;
			return i; // Si encontramos el valor, retornamos su índice
		}
		busqresfb++;

		oparr++;
	}
	//cout << "No ha encontrado el valor:  " << valor_buscado << endl;
	//cout << "El numero de operaciones realizadas  por Fuerza Bruta fue: " << x << endl << endl;
	return -1; // Si no encontramos el valor, retornamos -1
}

void Arreglo::burbuja2(int arreglo[], int n)
{
	int i, j, temp;
	bool huboCambio;

	for (i = 0; i < n - 1; i++) {
		huboCambio = false;

		for (j = 0; j < n - i - 1; j++) {

			if (arrnum[j] > arrnum[j + 1]) {
				// Intercambiar elementos
				temp = arrnum[j];
				arrnum[j] = arrnum[j + 1];
				arrnum[j + 1] = temp;
				huboCambio = true;
				oparr++;
				oparr2++;
				oparr3++;
			}
		}

		// Si no hubo cambios en una pasada, el arreglo ya está ordenado
		if (!huboCambio) {
			break;
		}
	}

	//cout << endl;
	//for (int i = 0; i < x; i++)
	//{
	//	cout << "[" << arrnum[i] << "] ";
	//}

	//cout << endl;
	//cout << endl << "Numero de operaciones: " << oparr << endl;
}

void Arreglo::swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
	oparr3++;
}

int Arreglo::partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivote
	int
		i = (low - 1); // Índice del elemento más pequeño

	for (int j = low; j <= high - 1; j++) {
		// Si el elemento actual es menor que el pivote
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
			oparr3++;
		}
	}
	swap(&arr[i + 1], &arr[high]);
	oparr3++;
	return (i + 1);
}

void Arreglo::quickSort(int arr[], int low, int high)
{
	if (low < high) {
		/* pi  es el índice de partición, arr[pi] ahora está en su posición correcta */
		int pi = partition(arr, low, high);
		oparr3++;

		// Ordenar recursivamente los elementos antes y después de la partición
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

