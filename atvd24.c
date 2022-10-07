/*24) Codifique um programa que indique a quantidade mínima de cédulas equivalente a uma
dada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.
(0,1)
*/

#include <stdio.h>

void cedulas(int x);

int main(void)
{
    // definir variaveis
    int valor;

    // solicitar valor
    printf("Digite a quantia de dinheiro que deseja saber: R$");
    scanf("%i", &valor);

    // vendo cedulas equivalentes
    cedulas(valor);

    return 0;
}


void cedulas(int x)
{
    int temp = x;
    int um = 0, cinco = 0, dez = 0, vinte = 0, cinq = 0, cem = 0;

    while(temp >= 100)
    {
        temp -= 100;
        cem++;
    }

    while(temp >= 50)
    {
        temp -= 50;
        cinq++;
    }

    while(temp >= 20)
    {
        temp -= 20;
        vinte++;
    }

    while(temp >= 10)
    {
        temp -= 10;
        dez++;
    }

    while(temp >= 5)
    {
        temp -= 5;
        cinco++;
    }

    while(temp >= 1)
    {
        temp -= 1;
        um++;
    }

    printf("Quantidade de notas equivalentes a R$ %i:\n"
           "R$ 100.00: %i\n"
           "R$ 50.00: %i\n"
           "R$ 20.00: %i\n"
           "R$ 10.00: %i\n"
           "R$ 5.00: %i\n"
           "R$ 01.00: %i\n", x, cem, cinq, vinte, dez, cinco, um);

    return;
}