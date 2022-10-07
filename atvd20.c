/*20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.
(0,1)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// funções
char *padronizar_nome(char *nome);
int comparar_nome (char *nome1, char *nome2);

int main(void)
{
    // definir variaveis
    char *nome1 = malloc(sizeof(char *));
    char *nome2 = malloc(sizeof(char *));

    // solicitando nomes
    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);
    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    // padronizar nome
    char *nome1_padrao = padronizar_nome(nome1);
    char *nome2_padrao = padronizar_nome(nome2);

    // comparar nomes e retornar um numero (0 para iguais, 1 para primeiro nome vim primeiro, 2 para segundo nome em primeiro)
    if (comparar_nome(nome1_padrao, nome2_padrao) == 0)
    {
        printf("Nomes iguais! (%s, %s)\n", nome1, nome2);
    }
    else if(comparar_nome(nome1_padrao, nome2_padrao) == 1)
    {
        printf("%s\n%s\n", nome1, nome2);
    }
    else if(comparar_nome(nome1_padrao, nome2_padrao) == 2)
    {
        printf("%s\n%s\n", nome2, nome1);
    }

    // liberar memoria
    free(nome1_padrao);
    free(nome2_padrao);
    free(nome1);
    free(nome2);

    return 0;
}


char *padronizar_nome(char *nome)
{
    // copiar string
    char *nome_padrao = malloc(strlen(nome) + 1);
    strcpy(nome_padrao, nome);

    // padronizar em maiusculo
    for (int i = 0; i < strlen(nome); i++)
    {
        nome_padrao[i] = toupper(nome[i]);
    }

    return nome_padrao;
}

int comparar_nome (char *nome1, char *nome2)
{
    int len1 = strlen(nome1);
    int len2 = strlen(nome2);

    // verificar o nome inteiro
    if (strcmp(nome1, nome2) == 0)
    {
        return 0;
    }

    // verificar letra por letra
    for (int i = 0; i < len1 + len2; i++)
    {

        // ver se o valor do character na tabela ASCII da primeira string é menor que o da segunda
        if (nome1[i] < nome2[i])
        {
            return 1;
        }
        // ver se o valor do character na tabela ASCII da primeira string é maior que o da segunda
        else if(nome1[i] > nome2[i])
        {
            return 2;
        }
    }

    return 0;
}