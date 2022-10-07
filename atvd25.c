/*25) Faça um programa que lê um conjunto de 10 valores inteiros e verifica se algum dos
valores é igual a média dos mesmos. (0,1)*/

#include <stdio.h>

int main(void)
{
    // definir variaveis
    int quant_nums = 10;
    int nums[quant_nums];

    // solicitar numeros
    for (int i = 0; i < quant_nums; i++)
    {
        printf("Digite o %iº número: ", (i+ 1));
        scanf("%i", &nums[i]);
    }

    // calcular média
    float soma = 0;
    float media = 0;
    for (int i = 0; i < quant_nums; i++)
    {
        soma += (float) nums[i];
    }
    media = soma / (float) quant_nums;

    // ver se algum numero é igual, caso seja, mostrar valor e média
    printf("Média: %.2f\n", media);

    for (int i = 0; i < quant_nums; i++)
    {
        if (nums[i] == media)
        {
            //se algum número for igual, mostrar na tela qual e encerrar o programa
            printf("O número %i é igual a média.\n", nums[i]);
            return 1;
        }
    }
    // definir por padrão que nenhum número será igual a média
    printf("Nenhum número digitado é igual a média.\n");
    return 0;
}