// Numeros_Naturales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Cat

#include <iostream>
using namespace std;

int main()
{
	int n, s;
	cout << "Introduce un natural n: ";
	cin >> n;

	while (n <= 0)
	{
		cout << "Dame un numero correcto: ";
		cin >> n;
	}

	s = n * (n + 1) / 2;

	cout << "La suma de los N primeros numeros del natural n es: " << s << endl;

	return 0;
}