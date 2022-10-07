/*15) Faça um programa que mostre todos os números pares existentes entre 1 e 50. (0,1)
*/

#include <stdio.h>

// função para mostrar os numeros
void pares(int x);

int main(void)
{
    // definir variavel
    int num_max = 50;

    // mostrando todos os pares entre 1 e 50
    pares(num_max);

    // pular uma linha final
    printf("\n");

    return 0;
}

void pares(int x)
{
    // loop percorrendo até o número definido na variável x
    for (int i = 1; i < x; i++)
    {
        if (i % 2 == 0 && i < 50)
        {
            printf("%i", i);
        }
        // colocar um virgula caso tenha adicionado algum numero par
        if (i % 2 == 0 && i + 2 < x)
        {
            printf(", ");
        }
    }
    return;
}