/*22) Desenvolva um programa que leia dez números do tipo inteiro ao usuário armazene esses
dez números em um vetor. Para os valores dos elementos inseridos nas posições pares desse
vetor, calcule o somatório deles, para os demais calcule a subtração desses valores. Em
seguida, o programa deverá apresentar na tela os resultados. (0,1)*/

#include <stdio.h>

int main(void)
{
    // definir variaveis
    int quant_nums = 10;
    int nums[quant_nums];

    for (int i = 0; i < quant_nums; i++)
    {
        printf("Digite o %iº número: ", (i+ 1));
        scanf("%i", &nums[i]);
    }

    // calcular resultado do somatório
    int somatorio = 0;
    int resultado[quant_nums];
    for (int i = 0; i < quant_nums; i++)
    {
        somatorio = 0;
        // se i for par, fazer o somatório
        if (i % 2 == 0)
        {
            for (int j = 1; j <= nums[i]; j++)
            {
                somatorio += j;
            }
            resultado[i] = somatorio;
        }
    }

    // calcular resultado da subtração
    int sub = 0;
    for (int i = 0; i < quant_nums; i++)
    {
        sub = 0;
        if (i % 2 != 0)
        {
                sub = nums[i - 1] - nums[i];
                resultado[i] = sub;
        }
    }

    // mostrar na tela
    // mostrando os numero iniciais
    printf("Números digitados: ");
    for (int i = 0; i < quant_nums; i++)
    {
        printf("%i", nums[i]);
        if (i + 1 < quant_nums)
        {
            printf(", ");
        }
    }
    printf("\n");
    // mostrando resultados dos calculos
    printf("Resultado: ");
    for (int i = 0; i < quant_nums; i++)
    {
        printf("%i", resultado[i]);

        if (i + 1 < quant_nums)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}