/*23) Escreva um programa que solicite seis números do tipo inteiro ao usuário e os armazene
em um vetor, depois o programa deverá apresentar na tela os números na ordem inversa do
qual foram digitados. (0,1)*/

#include <stdio.h>

void inverso(int array[], int x);

int main(void)
{
    // definir variaveis
    int quant_nums = 6;
    int nums[quant_nums];

    // solicitar numeros
    for (int i = 0; i < quant_nums; i++)
    {
        printf("Digite o %iº número: ", (i+ 1));
        scanf("%i", &nums[i]);
    }

    // mostrar na tela
    printf("Sequência inversa: ");
    inverso(nums, quant_nums);

    return 0;
}

void inverso(int array[], int x)
{
    for (int i = x - 1; i >= 0; i--)
    {
        printf("%i", array[i]);

        if ((i - 1) >= 0) printf(", ");
    }
    printf("\n");
    return;
}