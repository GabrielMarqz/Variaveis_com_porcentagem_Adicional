#include <cstdio>
#include <cmath>
using namespace std;
int main() {
    int valor1, valor2;
    printf ("Informe o primeiro valor: ");
    scanf ("%d", &valor1);
    printf ("Informe o segundo valor: ");
    scanf ("%d", &valor2);
    valor1 *= 1.8;
    valor2 *= 2.5;
    printf ("O primeiro valor com adicional de 80 por cento:  %d", valor1);
    printf ("\nO segundo valor com adicional de 150 por cento:  %d",valor2);
    printf ("\n");
    return 0;
}