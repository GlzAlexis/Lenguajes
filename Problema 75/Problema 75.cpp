// Problema 75.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int matriz[3][6] = { {1, 0,0,1,0,1},{1,0,0,0,0,1}, {0,1,1,1,0,1} }; // Se hace la matriz 3x6

	for (int i = 0; i < 3; i++)
	{
		for (int cont = 0; cont < 6; cont++) // Se despliega la matriz
		{
			cout << matriz[i][cont] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	int matriz2[6][3] = { {1,1,0},{0,0,1},{0,0,1},{1,0,1},{0,0,0},{1,1,1} }; // Se hace la matriz 6x3
	for (int i = 0; i < 6; i++)
	{
		for (int cont = 0; cont < 3; cont++) // Se despliega la matriz nuevamente
		{
			cout << matriz2[i][cont] << " ";
		}
		cout << "\n";
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
