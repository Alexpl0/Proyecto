#include <iostream>
#include "Lista.h"
#include "numal.h"
#include "Arreglo.h"
#include <fstream>
using namespace std;
void escribirarreglo(int* arreglo);
Lista::Nodo;
void escribirlista(Lista::Nodo* lista);
void escribirgrafica(int num);
ofstream archivo1, archivo2;
int main()
{
    Arreglo arreglo, arreglo2, arreglo3;
    Lista lista, lista2, lista3;
    int numb= rand() % 100;
    numal graf;
    archivo1.open("Archivo 1.txt",ios::out);
    archivo2.open("Archivo 2.txt", ios::out);

    cout << endl << "Numero a Buscar: " << numb << endl << endl;

    archivo1 << endl << "Numero a Buscar: " << numb << endl << endl;

    arreglo.asigarr();
    cout<< endl << "Arreglo Original: ";
    arreglo.mostrar(arreglo);
    //escribirarreglo(arreglo.arrnum);
    //-----------------------------------------------
    archivo1 << endl << "Arreglo Original: ";
    for (int i = 0; i < x; i++)
    {
        archivo1 << "[" << arreglo.arrnum[i] << "] ";
    }
    //------------------------------------------------

    arreglo.burbuja2(arreglo.arrnum, x);
    cout << endl << "Arreglo Ordenado: " ;
    arreglo.mostrar(arreglo);
    //escribirarreglo(arreglo.arrnum);
    //-----------------------------------------------
    archivo1 << endl << "Arreglo Ordenado: ";
    for (int i = 0; i < x; i++)
    {
        archivo1 << "[" << arreglo.arrnum[i] << "] ";
    }
    //------------------------------------------------
    cout << endl;
    arreglo.busqueda_fuerza_bruta(arreglo.arrnum, x, numb);
    cout << endl;
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo.oparr << endl;
    archivo1<<endl << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo.oparr << endl;
    arreglo.binarySearch(arreglo.arrnum, 0, x, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo.oparr2 << endl;
    archivo1<< "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo.oparr2 << endl;
    arreglo.quickSort(arreglo.arrnum, 0, x);
    cout << "Numero de operaciones Quick Sort: " << arreglo.oparr3 << endl;
    archivo1 << "Numero de operaciones Quick Sort: " << arreglo.oparr3 << endl;


    arreglo2.asigarr();
    cout << endl << "Arreglo Original: ";
    arreglo2.mostrar(arreglo2);
    //escribirarreglo(arreglo2.arrnum);
    //-----------------------------------------------
    archivo1 << endl << "Arreglo Original: ";
    for (int i = 0; i < x; i++)
    {
        archivo1 << "[" << arreglo2.arrnum[i] << "] ";
    }
    //------------------------------------------------
    arreglo2.burbuja2(arreglo2.arrnum, x);
    cout << endl << "Arreglo ordenado: " ;    
    arreglo2.mostrar(arreglo2);
    //escribirarreglo(arreglo2.arrnum);
    //-----------------------------------------------
    archivo1 << endl << "Arreglo Ordenado: ";
    for (int i = 0; i < x; i++)
    {
        archivo1 << "[" << arreglo2.arrnum[i] << "] ";
    }
    //------------------------------------------------
    cout << endl;
    arreglo2.busqueda_fuerza_bruta(arreglo2.arrnum, x, numb);
    cout << endl;
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo2.oparr << endl;
    archivo1 << endl << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo2.oparr << endl;
    arreglo2.binarySearch(arreglo2.arrnum, 0, x, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo2.oparr2 << endl;
    archivo1<< "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo2.oparr2 << endl;
    arreglo2.quickSort(arreglo2.arrnum, 0, x);
    cout << "Numero de operaciones Quick Sort: " << arreglo2.oparr3 << endl;
    archivo1<< "Numero de operaciones Quick Sort: " << arreglo2.oparr3 << endl;

    arreglo3.asigarr();
    cout << endl << "Arreglo Original: ";
    arreglo3.mostrar(arreglo3);
    //escribirarreglo(arreglo3.arrnum);
    //-----------------------------------------------
    archivo1 << endl << "Arreglo Original: ";
    for (int i = 0; i < x; i++)
    {
        archivo1 << "[" << arreglo3.arrnum[i] << "] ";
    }
    //------------------------------------------------
    arreglo3.burbuja2(arreglo3.arrnum, x);
    cout << endl << "Arreglo ordenado: ";
    arreglo3.mostrar(arreglo3);
    //escribirarreglo(arreglo3.arrnum);
    //-----------------------------------------------
    archivo1 << endl << "Arreglo Ordenado: ";
    for (int i = 0; i < x; i++)
    {
        archivo1 << "[" << arreglo3.arrnum[i] << "] ";
    }
    //------------------------------------------------
    cout << endl;
    arreglo3.busqueda_fuerza_bruta(arreglo3.arrnum, x, numb);
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo3.oparr << endl;
    archivo1 << endl << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << arreglo3.oparr << endl;
    arreglo3.binarySearch(arreglo3.arrnum, 0, x, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo3.oparr2 << endl;
    archivo1<< "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << arreglo3.oparr2 << endl;
    arreglo3.quickSort(arreglo3.arrnum, 0, x);
    cout << "Numero de operaciones Quick Sort: " << arreglo3.oparr3 << endl;
    archivo1<< "Numero de operaciones Quick Sort: " << arreglo3.oparr3 << endl;

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
    cout << endl << "Lista 1 No ordenada: ";
    lista.mostrarlista(lista.listn); // Se muestra la lista creada.
    //escribirlista(lista.listn);
    //---------------------------------------
    Lista::Nodo* move = new Lista::Nodo();
    archivo1<< endl << "Lista 1 No Ordenada: ";
    move = lista.listn;
    while (move != NULL)
    {
        archivo1 << move->Dato << " - ";
        move = move->siguiente;
    }
    //---------------------------------------

    lista.ordenburbuja(&lista.listn);
    cout << endl << "Lista 1 Ordenada: ";
    lista.mostrarlista(lista.listn);
    //escribirlista(lista.listn);
    //---------------------------------------
    Lista::Nodo* move1 = new Lista::Nodo();
    archivo1 << endl << "Lista 1 Ordenada: ";
    move1 = lista.listn;
    while (move1 != NULL)
    {
        archivo1 << move1->Dato << " - ";
        move1 = move1->siguiente;
    }
    //---------------------------------------

    cout << endl << endl;

    cout << endl << "Lista 2 No ordenada: ";
    lista2.mostrarlista(lista2.listn); // Se muestra la lista creada.
    //escribirlista(lista2.listn);
    //---------------------------------------
    Lista::Nodo* move2 = new Lista::Nodo();
    archivo1 << endl << "Lista 2 No Ordenada: ";
    move2 = lista2.listn;
    while (move2 != NULL)
    {
        archivo1 << move2->Dato << " - ";
        move2 = move2->siguiente;
    }
    //---------------------------------------
    lista2.ordenburbuja(&lista2.listn);
    cout << endl << "Lista 2 Ordenada: ";
    lista2.mostrarlista(lista2.listn); // Se muestra la lista creada.
    //escribirlista(lista2.listn);
    //---------------------------------------
    Lista::Nodo* move3 = new Lista::Nodo();
    archivo1 << endl << "Lista 2 Ordenada: ";
    move3 = lista2.listn;
    while (move3 != NULL)
    {
        archivo1 << move3->Dato << " - ";
        move3 = move3->siguiente;
    }
    //---------------------------------------
    cout << endl << endl;

    cout << endl << "Lista 3 No ordenada: ";
    lista3.mostrarlista(lista3.listn); // Se muestra la lista creada.
    //escribirlista(lista3.listn);
    //---------------------------------------
    Lista::Nodo* move4 = new Lista::Nodo();
    archivo1 << endl << "Lista 3 No Ordenada: ";
    move4 = lista3.listn;
    while (move4 != NULL)
    {
        archivo1 << move4->Dato << " - ";
        move4 = move4->siguiente;
    }
    //---------------------------------------
    lista3.ordenburbuja(&lista3.listn);
    cout << endl << "Lista 3 Ordenada: ";
    lista3.mostrarlista(lista3.listn); // Se muestra la lista creada.
    //scribirlista(lista3.listn);
    //---------------------------------------
    Lista::Nodo* move5 = new Lista::Nodo();
    archivo1 << endl << "Lista 3 Ordenada: ";
    move5 = lista3.listn;
    while (move5 != NULL)
    {
        archivo1 << move5->Dato << " - ";
        move5 = move5->siguiente;
    }
    //---------------------------------------
    cout << endl << endl;
    //----------------------------------------------------------------------
    //----------------------------------------------------------------------
    //BUSQUEDAS
    cout << endl << "Numero a Buscar: " << numb << endl<<endl;
    cout << "Resultado para Lista 1: " << endl;
    lista.busquedafb(lista.listn, numb);
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista.oplist << endl;
    lista.quickSort(lista.listn);
    cout << "Numero de operaciones Quick Sort: " << lista.oplist2 << endl;
    lista.BusquedaBinaria(lista.listn, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista.oplist3 << endl;

    archivo1 << endl << "Numero a Buscar: " << numb << endl << endl;
    archivo1 << "Resultado para Lista 1: " << endl;
    archivo1 << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista.oplist << endl;
    archivo1 << "Numero de operaciones Quick Sort: " << lista.oplist2 << endl;
    archivo1 << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista.oplist3 << endl;

    cout << "Resultado para Lista 2: " << endl;
    lista2.busquedafb(lista2.listn, numb);
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista2.oplist << endl;
    lista2.quickSort(lista2.listn);
    cout << "Numero de operaciones Quick Sort: " << lista2.oplist2 << endl;
    lista2.BusquedaBinaria(lista2.listn, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista2.oplist3 << endl;

    archivo1 << "Resultado para Lista 2: " << endl;
    archivo1 << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista2.oplist << endl;
    archivo1 << "Numero de operaciones Quick Sort: " << lista2.oplist2 << endl;
    archivo1 << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista2.oplist3 << endl;

    cout << "Resultado para Lista 3: " << endl;
    lista3.busquedafb(lista3.listn, numb);
    cout << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista3.oplist << endl;
    lista3.quickSort(lista3.listn);
    cout << "Numero de operaciones Quick Sort: " << lista3.oplist2 << endl;
    lista3.BusquedaBinaria(lista3.listn, numb);
    cout << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista3.oplist3 << endl;

    archivo1 << "Resultado para Lista 2: " << endl;
    archivo1 << "Numero de operaciones Fuerza Bruta y Ordenamiento Burbuja: " << lista3.oplist << endl;
    archivo1 << "Numero de operaciones Quick Sort: " << lista3.oplist2 << endl;
    archivo1 << "Numero de operaciones Busqueda Binaria y Ordenamiento Burbuja: " << lista3.oplist3 << endl;

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

    archivo2 << endl << endl;
    archivo2 << "|---------------------------------------------------------|" << endl;
    archivo2 << "|Funciones: | Fuerza Bruta | Busqueda Binaria | Quick Sort|" << endl;
    archivo2 << "|---------------------------------------------------------|" << endl;
    archivo2 << "|Arreglo 1: |      " << arreglo.oparr << "      |        " << arreglo.oparr2 << "        |     " << arreglo.oparr3 << "    | " << endl;
    archivo2 << "|---------------------------------------------------------|" << endl;
    archivo2 << "|Arreglo 2: |      " << arreglo2.oparr << "      |        " << arreglo2.oparr2 << "        |     " << arreglo2.oparr3 << "    | " << endl;
    archivo2 << "|---------------------------------------------------------|" << endl;
    archivo2 << "|Arreglo 3: |      " << arreglo3.oparr << "      |        " << arreglo3.oparr2 << "        |     " << arreglo3.oparr3 << "    | " << endl;
    archivo2 << "|---------------------------------------------------------|" << endl;
    archivo2 << "|Lista 1:   |      " << lista.oplist << "      |        " << lista.oplist3 << "        |    " << lista.oplist2 << "    | " << endl;
    archivo2 << "|---------------------------------------------------------|" << endl;
    archivo2 << "|Lista 2:   |      " << lista2.oplist << "      |        " << lista2.oplist3 << "        |     " << lista2.oplist2 << "    | " << endl;
    archivo2 << "|---------------------------------------------------------|" << endl;
    archivo2 << "|Lista 3:   |      " << lista3.oplist << "      |        " << lista3.oplist3 << "        |    " << lista3.oplist2 << "    | " << endl;
    archivo2 << "|---------------------------------------------------------|" << endl;
    archivo2 << endl << endl;

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


    archivo2 << "Arreglo 1 / Fuerza Bruta: " << endl;
    escribirgrafica(arreglo.oparr);
    archivo2 << endl;
    archivo2 << "Arreglo 1 / Busqueda Binaria: " << endl;
    escribirgrafica(arreglo.oparr2);
    archivo2 << endl;
    archivo2 << "Arreglo 1 / Quick Sort: " << endl;
    escribirgrafica(arreglo.oparr3);
    archivo2 << endl << endl;

    archivo2 << "Arreglo 2/  Fuerza Bruta: " << endl;
    escribirgrafica(arreglo2.oparr);
    archivo2 << endl;
    archivo2 << "Arreglo 2 / Busqueda Binaria: " << endl;
    escribirgrafica(arreglo2.oparr2);
    archivo2 << endl;
    archivo2 << "Arreglo 2 / Quick Sort: " << endl;
    escribirgrafica(arreglo2.oparr3);
    archivo2 << endl << endl;

    archivo2 << "Arreglo 3 / Fuerza Bruta: " << endl;
    escribirgrafica(arreglo3.oparr);
    archivo2 << endl;
    archivo2 << "Arreglo 3 / Busqueda Binaria: " << endl;
    escribirgrafica(arreglo3.oparr2);
    archivo2 << endl;
    archivo2 << "Arreglo 3 / Quick Sort: " << endl;
    escribirgrafica(arreglo3.oparr3);
    archivo2 << endl << endl << endl;

    archivo2 << "Lista 1 / Fuerza Bruta: " << endl;
    escribirgrafica(lista.oplist);
    archivo2 << endl;
    archivo2 << "Lista 1 / Busqueda Binaria: " << endl;
    escribirgrafica(lista.oplist2);
    archivo2 << endl;
    archivo2 << "Lista 1 / Quick Sort: " << endl;
    escribirgrafica(lista.oplist3);
    archivo2 << endl << endl;

    archivo2 << "Lista 2 / Fuerza Bruta: " << endl;
    escribirgrafica(lista2.oplist);
    archivo2 << endl;
    archivo2 << "Lista 2 / Busqueda Binaria: " << endl;
    escribirgrafica(lista2.oplist2);
    archivo2 << endl;
    archivo2 << "Lista 2 / Quick Sort: " << endl;
    escribirgrafica(lista2.oplist3);
    archivo2 << endl << endl;

    archivo2 << "Lista 3 / Fuerza Bruta: " << endl;
    escribirgrafica(lista3.oplist);
    archivo2 << endl;
    archivo2 << "Lista 3 / Busqueda Binaria: " << endl;
    escribirgrafica(lista3.oplist2);
    archivo2 << endl;
    archivo2 << "Lista 3 / Quick Sort: " << endl;
    escribirgrafica(lista3.oplist3);
    archivo2 << endl << endl;

    archivo2 << endl << endl;

    return 0;    
}

void escribirarreglo(int* arreglo)
{
    archivo1 << endl << "Arreglo Original: ";
    for (int i = 0; i < x; i++)
    {
        cout << "[" << arreglo[i] << "] ";
    }
}

void escribirlista(Lista::Nodo* listn)
{
    Lista::Nodo* move = new Lista::Nodo();
    move = listn;
    while (move != NULL)
    {
        cout << move->Dato << " - ";
        move = move->siguiente;
    }
}

void escribirgrafica(int num)
{
    for (int i = 0; i != num; i++)
    {
        archivo2 << "-";
    }
}
