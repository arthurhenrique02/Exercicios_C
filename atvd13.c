/* 13) Dado um número positivo, crie um programa que escreva todos os números ímpares
menores e/ou iguais a esse número e maiores ou igual a um. (0,1)
*/

#include <stdio.h>

void print_impar(int x);


int main(void)
{
    // definir variavel
    int num;

    // solicitando numero
    printf("Digite um número positivo: ");
    scanf("%i", &num);

    // checar se o numero é positivo
    while (num < 0)
    {
        printf("número negativo!\nDigite um número positivo:");
        scanf("%i", &num);
    }

    // mostrar numeros
    print_impar(num);

    return 0;
}


void print_impar(int x)
{
    // somar 1 se o numero for impar, para mostrá-lo na tela
    if (x % 2 != 0) x++;

    for (int i = 1; i < x; i++)
    {
        // mostrar na tela os numeros impares menores ou iguais ao numero digitado
        if (i % 2 != 0)
        {
            printf("%i\n", i);
        }
    }
    return;
}