/*21) Escreva um programa que leia doze números do tipo inteiro ao usuário. Separe esses
números em pares e ímpares e os armazenem em dois outros vetores separando pares e
ímpares, exibindo os resultados na tela. (0,1)*/

#include <stdio.h>

int main(void)
{
    // definir variáveis
    int quant_nums = 12;
    int num;
    int pares[quant_nums];
    int impares[quant_nums];
    // variavel de controle para pares e impares
    int count_p = 0, count_i = 0;


    // solicitar e salvar números
    for (int i = 0; i < quant_nums; i++)
    {
        printf("Digite o %iº número: ", (i+ 1));
        scanf("%i", &num);

        // salvando pares e impares em suas respectivas arrays
        if (num % 2 == 0)
        {
            pares[count_p] = num;
            count_p++;
        }
        else
        {
            impares[count_i] = num;
            count_i++;
        }
    }

    // mostrar na tela
    // pares
    printf("Pares: ");
    for (int i = 0; i < count_p; i++)
    {
        printf("%i ", pares[i]);

        // mostrar uma virgula
        if (i + 1 < count_p)
        {
            printf(", ");
        }
    }
    // pular linha
    printf("\n");

    // impares
    printf("Impares: ");
    for (int i = 0; i < count_i; i++)
    {
        printf("%i", impares[i]);

        // mostrar uma virgula
        if (i + 1 < count_i)
        {
            printf(", ");
        }
    }

    // pular linha
    printf("\n");

    return 0;
}
