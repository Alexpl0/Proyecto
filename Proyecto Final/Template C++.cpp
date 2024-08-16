#include <iostream>
#include "Lista.h"
#include "numal.h"
#include "Arreglo.h"
#include <fstream>
using namespace std;

int main()
{
    Arreglo arreglo, arreglo2, arreglo3;
    Lista lista, lista2, lista3;
    int numb= rand() % 100;
    numal graf;

    arreglo.asigarr();
    cout << endl << "Arreglo Original: ";
    arreglo.mostrar(arreglo);
    arreglo.burbuja2(arreglo.arrnum, x);
    cout << endl << "Arreglo Ordenado: " ;
    arreglo.mostrar(arreglo);
    cout << endl;
    arreglo.busqueda_fuerza_bruta(arreglo.arrnum, x, numb);
    cout << endl;
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo.oparr << endl;
    arreglo.binarySearch(arreglo.arrnum, 0, x, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo.oparr2 << endl;
    arreglo.quickSort(arreglo.arrnum, 0, x);
    cout << "Numero de operaciones Quick Sort: " << arreglo.oparr3 << endl;


    arreglo2.asigarr();
    cout << endl << "Arreglo Original: ";
    arreglo2.mostrar(arreglo2);
    arreglo2.burbuja2(arreglo2.arrnum, x);
    cout << endl << "Arreglo ordenado: " ;    
    arreglo2.mostrar(arreglo2);
    cout << endl;
    arreglo2.busqueda_fuerza_bruta(arreglo2.arrnum, x, numb);
    cout << endl;
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo2.oparr << endl;
    arreglo2.binarySearch(arreglo2.arrnum, 0, x, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo2.oparr2 << endl;
    arreglo2.quickSort(arreglo2.arrnum, 0, x);
    cout << "Numero de operaciones Quick Sort: " << arreglo2.oparr3 << endl;

    arreglo3.asigarr();
    cout << endl << "Arreglo Original: ";
    arreglo3.mostrar(arreglo3);
    arreglo3.burbuja2(arreglo3.arrnum, x);
    cout << endl << "Arreglo ordenado: ";
    arreglo3.mostrar(arreglo3);
    cout << endl;
    arreglo3.busqueda_fuerza_bruta(arreglo3.arrnum, x, numb);
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo3.oparr << endl;
    arreglo3.binarySearch(arreglo3.arrnum, 0, x, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo3.oparr2 << endl;
    arreglo3.quickSort(arreglo3.arrnum, 0, x);
    cout << "Numero de operaciones Quick Sort: " << arreglo3.oparr3 << endl;

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
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista.oplist << endl;
    lista.quickSort(lista.listn);
    cout << "Numero de operaciones Quick Sort: " << lista.oplist2 << endl;
    lista.BusquedaBinaria(lista.listn, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista.oplist3 << endl;

    cout << "Resultado para Lista 2: " << endl;
    lista2.busquedafb(lista2.listn, numb);
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista2.oplist << endl;
    lista2.quickSort(lista2.listn);
    cout << "Numero de operaciones Quick Sort: " << lista2.oplist2 << endl;
    lista2.BusquedaBinaria(lista2.listn, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista2.oplist3 << endl;

    cout << "Resultado para Lista 3: " << endl;
    lista3.busquedafb(lista3.listn, numb);
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista3.oplist << endl;
    lista3.quickSort(lista3.listn);
    cout << "Numero de operaciones Quick Sort: " << lista3.oplist2 << endl;
    lista3.BusquedaBinaria(lista3.listn, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista3.oplist3 << endl;

    //Vista de Tabla
    // En lista, Quick Sort es el 2; en Arreglo es el 3
    cout << endl << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << "|Funciones: | Fuerza Bruta | Busqueda Binaria | Quick Sort|" << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << "|Arreglo 1: |      " << arreglo.oparr << "      |        " << arreglo.oparr2 << "        |     " << arreglo.oparr3 << "    | " << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << "|Arreglo 2: |      " << arreglo2.oparr << "      |        " << arreglo2.oparr2 << "        |     " << arreglo2.oparr3 << "    | " << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << "|Arreglo 3: |      " << arreglo3.oparr << "      |        " << arreglo3.oparr2 << "        |     " << arreglo3.oparr3 << "    | " << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << "|Lista 1:   |      " << lista.oplist << "      |        " << lista.oplist3 << "        |    " << lista.oplist2 << "    | " << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << "|Lista 2:   |      " << lista2.oplist << "      |        " << lista2.oplist3 << "        |     " << lista2.oplist2 << "    | " << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << "|Lista 3:   |      " << lista3.oplist << "      |        " << lista3.oplist3 << "        |    " << lista3.oplist2 << "    | " << endl;
    cout << "|---------------------------------------------------------|" << endl;
    cout << endl << endl;

    // Vista Grafica:
    cout << "Arreglo 1 / Fuerza Bruta: " << endl;
    graf.grafica(arreglo.oparr);
    cout << endl;
    cout << "Arreglo 1 / Busqueda Binaria: " << endl;
    graf.grafica(arreglo.oparr2);
    cout << endl;
    cout << "Arreglo 1 / Quick Sort: " << endl;
    graf.grafica(arreglo.oparr3);
    cout << endl << endl;

    cout << "Arreglo 2/  Fuerza Bruta: " << endl;
    graf.grafica(arreglo2.oparr);
    cout << endl;
    cout << "Arreglo 2 / Busqueda Binaria: " << endl;
    graf.grafica(arreglo2.oparr2);
    cout << endl;
    cout << "Arreglo 2 / Quick Sort: " << endl;
    graf.grafica(arreglo2.oparr3);
    cout << endl << endl;

    cout << "Arreglo 3 / Fuerza Bruta: " << endl;
    graf.grafica(arreglo3.oparr);
    cout << endl;
    cout << "Arreglo 3 / Busqueda Binaria: " << endl;
    graf.grafica(arreglo3.oparr2);
    cout << endl;
    cout << "Arreglo 3 / Quick Sort: " << endl;
    graf.grafica(arreglo3.oparr3);
    cout << endl << endl << endl;

    cout << "Lista 1 / Fuerza Bruta: " << endl;
    graf.grafica(lista.oplist);
    cout << endl;
    cout << "Lista 1 / Busqueda Binaria: " << endl;
    graf.grafica(lista.oplist2);
    cout << endl;
    cout << "Lista 1 / Quick Sort: " << endl;
    graf.grafica(lista.oplist3);
    cout << endl << endl;

    cout << "Lista 2 / Fuerza Bruta: " << endl;
    graf.grafica(lista2.oplist);
    cout << endl;
    cout << "Lista 2 / Busqueda Binaria: " << endl;
    graf.grafica(lista2.oplist2);
    cout << endl;
    cout << "Lista 2 / Quick Sort: " << endl;
    graf.grafica(lista2.oplist3);
    cout << endl << endl;

    cout << "Lista 3 / Fuerza Bruta: " << endl;
    graf.grafica(lista3.oplist);
    cout << endl;
    cout << "Lista 3 / Busqueda Binaria: " << endl;
    graf.grafica(lista3.oplist2);
    cout << endl;
    cout << "Lista 3 / Quick Sort: " << endl;
    graf.grafica(lista3.oplist3);
    cout << endl << endl;

    cout << endl << endl;
    return 0;    
}