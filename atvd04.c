/*4) Faça um programa que lê dois valores e imprime: (0,1)
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo até o primeiro
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/

#include <stdio.h>

void checar_ordem(int array[], int num);

int main(void)
{
    // definir variáveis
    int num = 2;
    int array[num];

    // pegar os numeros e salvar na array
    for (int i = 0; i < num; i++)
    {
        printf("digite o %iº numero: ", (i + 1));
        scanf("%i", &array[i]);
    }

    // mostrar na tela
    checar_ordem(array, num);

    return 0;

}

void checar_ordem(int array[], int num)
{
    if (array[0] < array[1])
    {
        printf("ordem crescente: \n");
        for (int i = array[0]; i <= array[1]; i++)
        {
            printf("%i\n", i);
        }

        printf("=================\n");
        printf("ordem crescente: \n");
        for (int i = array[1]; i >= array[0]; i--)
        {

            printf("%i\n", i);
        }
    }

    else if(array[0] == array[1])
    {
        printf("Valores iguais\n");
    }
}