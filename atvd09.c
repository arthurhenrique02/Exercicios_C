/*9) Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA =
(N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
(0,1)
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/

#include <stdio.h>

int main(void)
{
    // defininir variavel
    int num_notas = 4;
    float notas[1][num_notas];

    // coletar notas
    for (int i = 0; i < num_notas; i++)
    {
        // verificar se está na últiima posição para adicionar a média
        if (i + 1 == num_notas)
        {
            printf("Digite a média do aluno: ");
            scanf("%f", &notas[0][i]);
            break;
        }

        // solicitando notas
        printf("Digite a %iº do aluno: ", (i + 1));
        scanf("%f", &notas[0][i]);
    }

    // calcular media de aproveitamento

    float ma = (notas[0][0] + (notas[0][1] * 2) + (notas[0][2] * 3) + notas[0][3]) / 7;

    printf("%.2f\n", ma);

    // verificar em qual tipo de nota o aluno se encaixa e mostrar na tela

    if ( ma >= 9.0)
    {
        printf("nota A\n");
    }
    else if (ma >= 7.5 && ma < 9.0)
    {
        printf("nota B\n");
    }
    else if ( ma >= 6 && ma < 7.5)
    {
        printf("nota C\n");
    }
    else if ( ma >= 4 && ma < 6.0)
    {
        printf("nota D\n");
    }
    else
    {
        printf("nota E\n");
    }

    return 0;
}