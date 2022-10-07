/*8) Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número
máximo (no exemplo, 9). Este número deve ser sempre ímpar. (0,1)
1 2 3 4 5 6 7 8 9
  2 3 4 5 6 7 8
    3 4 5 6 7
      4 5 6
        5
*/

#include <stdio.h>
#include <math.h>

void piramide(int x);

int main(void)
{
    // definir variãvel
    int num_max;
    int altura = 0;

    printf("Digite o número máximo de digitos que deseja (o número deve ser ímpar): ");
    scanf("%i", &num_max);

    while (num_max % 2 == 0)
    {
        printf("O número digitado não é ímpar, digite outro número: ");
        scanf("%i", &num_max);
    }

    // calcular a altura da pirâmide e desenhá-la
    altura = round(num_max / 2 + 1);
    piramide(altura);

    return 0;
}


void piramide(int x)
{
    for (int i =  0; i < x; i++)
    {
        // adcionando contadores
        int counter = 1;
        int counter2 = x + 1;

        // centralizando piramide
        for (int k = 0; k < i; k++)
        {
            printf(" ");
            // somar contador quando centralizar números
            counter++;
        }

        // fazendo parte esquerda
        for (int j = x; j != i; j--)
        {
            // mostrar os número checando de o loop já percorreu até o meio da pirâmide
            if (j - i >= 2)
            {
                printf("%i", counter);
                counter++;
            }
            else
            {
                // se chegou ao meio da pirâmide, mostrar o número central
                counter = x;
                printf("%i", counter);
            }
        }

        // fazendo parte direita da piramide
        for (int j = x - 1; j > i; j--)
        {
            printf("%i", counter2);
            counter2++;
        }

        // pular linha
        printf("\n");
    }
}
