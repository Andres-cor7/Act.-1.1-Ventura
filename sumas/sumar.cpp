#include "sumar.h"

int sumar::sumaIterativa(int n)
{
    int suma = 0;
    for (int i = 0; i <= n; i++) //Complejidad = O(n), se realizan n cantidad de calculos, depende de n.
    {
        suma += i;
    }
    return suma;
}

int sumar::sumaRecursiva(int n) //Complejidad = O(n), una sola recursividad por ciclo.
{
    int suma;
    if (n == 1)
        return 1;
    suma = sumaRecursiva(n - 1) ;
    return n + suma;
}

int sumar::sumaDirecta(int n) //Complejidad = O(1), constante, un solo calculo independientemente de n.
{
    int suma; 
    suma = (n * (n + 1)) / 2;
    return suma;
}
