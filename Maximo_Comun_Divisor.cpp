// Maximo_Comun_Divisor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Cat

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Declaramos las variables que usaremos
    int num1, num2, a, b, res;
    // Pedimos al usuario que ingrese los numeros
    cout << "Ingrese el primer numero: \n";
    cin >> num1;
    cout << "Ingrese el segundo numero: \n";
    cin >> num2;
    // Seleccionamos el mayor y el menor y los
    // asignamos a las variables "a" y "b"
    a = std::max(num1, num2);
    b = std::min(num1, num2);
    // Creamos el ciclo que realizará las iteraciones
    do {
        res = b;
        b = a % b;
        a = res;
    } while (b != 0);
    // Mostramos el resultado en pantalla
    cout << "El M.C.D. entre " << num1 << " y " << num2 << " es: " << res;
    return 0;
}