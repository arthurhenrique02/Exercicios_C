/*19) Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipo
inteiro. (0,1)
*/

#include <stdio.h>

void maior(int array[], int qntd);

int main(void)
{
    // definir variaveis
    int quant_nums = 5;
    int nums[quant_nums];

    for (int i = 0; i < quant_nums; i++)
    {
        printf("Digite o %iº numero: ", (i + 1));
        scanf("%i", &nums[i]);
    }

    // vendo e mostrando o maio número
    maior(nums, quant_nums);

    return 0;
}


void maior(int array[], int qntd)
{
    // definir por padrao um numero maior
    int maior = array[0];

    // ver se existe algum numero maior
    for (int i = 0; i < qntd; i++)
    {
        // substituir caso exista algum numero maior
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }

    printf("Maior número: %i\n", maior);
}