#pragma once
#include "numal.h"
using namespace std;
class Arreglo
{
public:
	int arrnum[x];
	int busqres, busqres2, busqres3;
	int oparr=0;
	numal arr;
	void asignum(int* arr, int* num); // Intento fallido de igualar el arreglo a los numeros aleatorios
	void asigarr(); // Intento exitoso de agregar los aleatorios al arreglo
	void mostrar(Arreglo arreglo); // Muestra el arreglo final
	void burbuja(int arreglo[], int n); // El arreglo sera la estructura creada por Numal, Valor[]; y n sera el valor X de numal
	bool binarySearch(int arr[], int left, int right, int b); // right sera la variable x declarada en Numal y left sera 0
}; 

