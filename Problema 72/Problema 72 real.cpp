// Problema 72 real.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int conjunto[20][50], mayor;

	for (int i = 0; i < 20; i++) // Este es un for para crear los conjuntos de numeros al azar
	{
		for (int cont = 0; cont < 50; cont++)  // Es es el ciclo que genera los numeros al azar del 1 al 55
		{
			conjunto[i][cont] = 1 + rand() % (56 - 1);
		}
	}

	for (int i = 0; i < 20; i++) // En es ciclo se despliega el numero mayor por cada conjunto de 10
	{                            // Que para ser sincero no le entendi del todo que era lo que queria
		mayor = 0;               // Hiciera con exactitud, pero esto fue como yo le entendi
		for (int cont = 0; cont < 10; cont++)
		{                                     // En cada ciclo se selecciona el numero mayor de cada conjunto
			if (conjunto[i][cont] > mayor) { mayor = conjunto[i][cont]; }
		}
		cout << "\nEl numero mayor del conjunto " << i << "" << " del 1 al 10 es: " << mayor << "";
		mayor = 0;
		for (int cont = 10; cont < 20; cont++)
		{
			if (conjunto[i][cont] > mayor) { mayor = conjunto[i][cont]; }
		}
		cout << "\nEl numero mayor del conjunto " << i << "" << " del 11 al 20 es: " << mayor << "";
		mayor = 0;
		for (int cont = 20; cont < 30; cont++)
		{
			if (conjunto[i][cont] > mayor) { mayor = conjunto[i][cont]; }
		}
		cout << "\nEl numero mayor del conjunto " << i << "" << " del 21 al 30 es: " << mayor << "";
		mayor = 0;
		for (int cont = 30; cont < 40; cont++)
		{
			if (conjunto[i][cont] > mayor) { mayor = conjunto[i][cont]; }
		}
		cout << "\nEl numero mayor del conjunto " << i << "" << " del 31 al 40 es: " << mayor << "";
		mayor = 0;
		for (int cont = 40; cont < 50; cont++)
		{
			if (conjunto[i][cont] > mayor) { mayor = conjunto[i][cont]; }
		}
		cout << "\nEl numero mayor del conjunto " << i << "" << " del 41 al 50 es: " << mayor << "\n";
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
