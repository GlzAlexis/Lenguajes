// Problema 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double A, B, C; // Declaracion de variables
	cout << "De la desigualdad Ax^2 + Bx + C < 0 ingrese los valores que se le piden\n";
	cout << "Ingrese el valor de A: ";
	cin >> A;
	cout << "Ingrese el valor de B: "; // Se ingresan los datos solicitados
	cin >> B;
	cout << "Ingrese el valor de C: ";
	cin >> C;
	
	double raiz = ((pow(B, 2)) + (4*A*C));
	double x1 = ((-B - sqrt(raiz))/(2*A));     // Esta es la operacion para encontrar el
	double x2 = ((-B + sqrt(raiz)) / (2 * A)); // valor de x

	cout << "Los resultados son:\n"
		<< "x1 = " << x1 << ""      // Se despliegan los resultados
		<< "\nx2 = " << x2 << "";
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
