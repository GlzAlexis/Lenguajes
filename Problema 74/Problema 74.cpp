// Problema 74.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int arreglo[20], mayor, menor; // Declaracion de variables

	for (int i = 0; i < 20; i++) // Se generan los numeros al azar mientras se despliegan
	{
		arreglo[i] = 1 + rand() % (100 - 1);
		cout << arreglo[i] << "\n";
	}
	cout << "\n";
	for (int i = 0; i < 10; i++) // Se ordenan
	{
		mayor = 0;
		for (int cont = 0; cont < 20; cont++)
		{
			if (arreglo[cont] > mayor)
			{
				mayor = arreglo[cont];
			}
		}
		cout << mayor << "  ";
		menor = mayor;
		for (int cont = 0; cont < 20; cont++)
		{
			if (arreglo[cont] < menor)
			{
				menor = arreglo[cont];
			}
		}
		cout << menor << "\n";
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
