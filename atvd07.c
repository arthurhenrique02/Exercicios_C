/*7) Implemente um programa que solicita as notas das duas provas feitas por cada um dos
alunos de uma turma (as notas têm de estar no intervalo [0 10]) e imprime para cada um a
média das notas. O programa deve parar imediatamente após ter sido digitado o valor 50 para
a nota da primeira prova. (0,1)*/

#include <stdio.h>

int main(void)
{
    // definir variável
    int quant_notas = 2;
    float notas[2];

    while (notas[0] != 50)
    {
        for(int i = 0; i < quant_notas; i++)
        {
            // solicitando nota do aluno
            printf("Digite a %iº nota do aluno: ", (i + 1));
            scanf("%f", &notas[i]);

            // verificando se a primeira nota é igual 50
            if (notas[0] == 50)
            {
                printf("Encerrando o programa!!\n");
                return 0;
            }

            // verificando se a nota está dentro do escopo de notas (0 a 10)
            if (notas[i] > 10 || notas[i] < 0)
            {
                printf("Digite uma nota válida (de 0 a 10): ");
                scanf("%f", &notas[i]);
            }
        }
        // mostrando média do aluno
        printf("A média do aluno foi: %.2f\n", (notas[0] + notas[1]) / 2);
    }
}