/*11) Codifique um programa que leia a quantidade de alunas e de alunos. Depois esse
programa deve informar se essa turma possui mais alunos ou mais alunas. Se essa turma
possuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.
O programa deve verificar se a quantidade de alunos é igual a de alunas. (0,1)
*/

#include <stdio.h>

int main(void)
{
    // definir variáveis
    int quant_m, quant_h;

    // solicitar quantidades de alunas e alunos
    printf("Digite a quantidades de ALUNAS: ");
    scanf("%i", &quant_m);
    printf("Digite a quantidades de ALUNOS: ");
    scanf("%i", &quant_h);

    // verificar se a quantidade de alunos e alunas são iguais
    if (quant_m == quant_h)
    {
        printf("A quantidade de alunas e alunos são iguais (%i alunas e %i alunos).\n", quant_m, quant_h);
        return 1;
    }

    // verificar se a quantidade de alunos é maior que a de alunas
    if (quant_m < quant_h)
    {
        printf("A quantidade de alunos é maior que a de alunas (%i alunas e %i alunos)\n", quant_m, quant_h);
        return 2;
    }

    // definir a quantidade de alunas maior que a de alunos por padrão
    printf("A quantidade de alunas é maior que a de alunos.\nA quantidade total de alunos é: %i (%i alunas e %i alunos)\n", (quant_m + quant_h), quant_m, quant_h);
    return 0;
}