// Problema 72.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int edad;  // Declaracion de variables
	int numero;
	cout << "Indique la cantidad de numeros que se generaran: "; // Solicitud de datos
	cin >> numero;
	cout << "Indique su edad: ";
	cin >> edad;
	cout << "\n";
	
	int *arreglo = new int[numero]; // Se declara el arreglo

	for (int i = 0; i < numero; i++) // Se generan los numeros al azar
	{
		arreglo[i] = 10 + rand() % (100 - 10);

		if (arreglo[i] < edad)
			cout << (i + 1) << ".- " << arreglo[i] << "\n"; // Se selecciona los que sean menores a mi edad
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
