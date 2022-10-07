/*18) Faça um programa C que leia dez números que representam as notas de dez alunos de
uma disciplina. As notas variam de zero até dez (0 a 10). O programa deve validar a entrada
de dados e obter: a soma das notas, a média das notas, a maior nota, a menor nota. Assuma
que as notas são informadas corretamente no intervalo de 1 a 10. (0,1)
*/

#include <stdio.h>

void media(float notas[], int alunos);
void maior_nota(float notas[], int alunos);
void menor_nota(float notas[], int alunos);

int main(void)
{

    // definir variavel
    int quant_notas = 10;
    float notas[quant_notas];

    // solicitar notas
    for (int i = 0; i < quant_notas; i++)
    {
        printf("Digite a nota do %iº aluno: ", (i + 1));
        scanf("%f", &notas[i]);

        // repetir loop se a nota não estiver entre 0 e 10
        while (notas[i] < 0 || notas[i] > 10)
        {
            printf("Nota inválida!!\nDigite a nota corretamente: ");
            scanf("%f", &notas[i]);
        }
    }

    media(notas, quant_notas);
    maior_nota(notas, quant_notas);
    menor_nota(notas, quant_notas);

    return 0;
}

void media(float notas[], int alunos)
{
    // variavel de soma
    float soma = 0;

    // loop para somar
    for (int i = 0; i < alunos; i++)
    {
        soma += notas[i];
    }

    printf("Média: %.2f\n", (soma / alunos));
}

void maior_nota(float notas[], int alunos)
{
    // definir por padrao uma nota maior
    float maior = notas[0];

    // ver se existe alguma nota maior
    for (int i = 0; i < alunos; i++)
    {
        // substituir caso exista uma nota maior
        if (notas[i] > maior)
        {
            maior = notas[i];
        }
    }

    printf("Maior nota: %.2f\n", maior);
}

void menor_nota(float notas[], int alunos)
{
    // definir por padrao uma nota menor
    float menor = notas[0];

    // ver se existe alguma nota menor
    for (int i = 0; i < alunos; i++)
    {
        // substituir caso exista uma nota menor
        if (notas[i] < menor)
        {
            menor = notas[i];
        }
    }

    printf("Menor nota: %.2f\n", menor);
}