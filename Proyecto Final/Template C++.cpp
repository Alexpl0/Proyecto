#include <iostream>
#include "Lista.h"
#include "numal.h"
#include "Arreglo.h"
using namespace std;

int main()
{
    Arreglo arreglo, arreglo2, arreglo3;
    Lista lista, lista2, lista3;
    int numb= rand() % 100;

    arreglo.asigarr();
    arreglo.mostrar(arreglo);
    arreglo.burbuja(arreglo.arrnum,x);
    arreglo.mostrar(arreglo);
    arreglo.binarySearch(arreglo.arrnum, 0, x, numb);
    cout << endl;

    arreglo2.asigarr();
    arreglo2.mostrar(arreglo2);
    arreglo2.burbuja(arreglo2.arrnum, x);
    arreglo3.mostrar(arreglo3);
    arreglo2.binarySearch(arreglo2.arrnum, 0, x, numb);
    arreglo.mostrar(arreglo);
    
    cout << endl;

    arreglo3.asigarr();
    arreglo3.mostrar(arreglo3);
    arreglo3.burbuja(arreglo3.arrnum, x);
    arreglo3.mostrar(arreglo3);
    arreglo3.binarySearch(arreglo3.arrnum, 0, x, numb);
    cout << endl;

    lista.i.asignum(lista.i.num);
    lista2.i.asignum(lista2.i.num);
    lista3.i.asignum(lista3.i.num);//Se asignan los numeros aleatorios creados por el numal
    //----------------------------------------------------------------------
    lista.i.valpunt(lista.i.num); // Funcion para convertir int* a int normal
    for (int i = 0; i < lista.i.rep; i++) {
        lista.i.valor[i] = *lista.i.val[i]; //#increible
    }
    lista2.i.valpunt(lista2.i.num); // Funcion para convertir int* a int normal
    for (int i = 0; i < lista2.i.rep; i++) {
        lista2.i.valor[i] = *lista2.i.val[i]; //#increible
    }
    lista3.i.valpunt(lista3.i.num); // Funcion para convertir int* a int normal
    for (int i = 0; i < lista3.i.rep; i++) {
        lista3.i.valor[i] = *lista3.i.val[i]; //#increible
    }
    //----------------------------------------------------------------------
    for (int i = 0; i < lista.i.rep; i++)
    {
        lista.insertarLista(lista.listn, lista.i.valor[i]);// Una vez creados los int se asignan a la lista
    }
    for (int i = 0; i < lista2.i.rep; i++)
    {
        lista2.insertarLista(lista2.listn, lista2.i.valor[i]);// Una vez creados los int se asignan a la lista
    }
    for (int i = 0; i < lista3.i.rep; i++)
    {
        lista3.insertarLista(lista3.listn, lista3.i.valor[i]);// Una vez creados los int se asignan a la lista
    }

    //----------------------------------------------------------------------
    cout << endl << "Lista No ordenada: ";
    lista.mostrarlista(lista.listn); // Se muestra la lista creada.
    lista.ordenburbuja(&lista.listn);
    cout << endl << "Lista Ordenada: ";
    lista.mostrarlista(lista.listn);
    cout << endl << endl;

    cout << endl << "Lista No ordenada: ";
    lista2.mostrarlista(lista2.listn); // Se muestra la lista creada.
    lista2.ordenburbuja(&lista2.listn);
    cout << endl << "Lista Ordenada: ";
    lista2.mostrarlista(lista2.listn); // Se muestra la lista creada.
    cout << endl << endl;

    cout << endl << "Lista No ordenada: ";
    lista3.mostrarlista(lista3.listn); // Se muestra la lista creada.
    lista3.ordenburbuja(&lista3.listn);
    cout << endl << "Lista Ordenada: ";
    lista3.mostrarlista(lista3.listn); // Se muestra la lista creada.
    cout << endl << endl;
    //----------------------------------------------------------------------
    //----------------------------------------------------------------------
    //BUSQUEDAS
    cout << endl << "Numero a Buscar: " << numb << endl;
    cout << "Resultado para Lista 1: " << endl;
    lista.busquedafb(lista.listn, numb);

    cout << "Resultado para Lista 2: " << endl;
    lista2.busquedafb(lista2.listn, numb);

    cout << "Resultado para Lista 3: " << endl;
    lista3.busquedafb(lista3.listn, numb);
    return 0;    
}