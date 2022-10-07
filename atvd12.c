/*12) Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael e
informar quem é o mais velho. Considere que essas pessoas possuem idades diferentes. (0,1)
*/

#include <stdio.h>

// definir variavel pessoa
typedef struct
{
    char *nome;
    int idade;
}
pessoa;

int main (void)
{
    // definir variáveis
    int mais_velho, num_pessoas = 3;
    pessoa pessoas[num_pessoas];

    // alocando nomes e idades
    pessoas[0].nome = "Pedro";
    pessoas[1].nome = "Joana";
    pessoas[2].nome = "Ismael";

    pessoas[0].idade = 50;
    pessoas[1].idade = 21;
    pessoas[2].idade = 9;


    // definindo uma pessoa mais velha por padrão
    mais_velho = 0;

    // verificando se há alguma pessoa mais velha que a definida por padrão
    for (int i = 0; i < num_pessoas; i++)
    {
        if (mais_velho != i && pessoas[i].idade > pessoas[mais_velho].idade)
        {
            mais_velho = i;
        }
    }

    // mostrando o nome e idade da pessoa mais velha
    printf("A pessoa mais velha é: %s (%i anos)\n", pessoas[mais_velho].nome, pessoas[mais_velho].idade);
    return 0;
}