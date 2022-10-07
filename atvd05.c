/*5) Escreva um programa que imprime a tabela ASCII (código decimal, código hexa, caractere)
para os códigos de 0 a 127. (0,1)*/

#include <stdio.h>

int main(void)
{
    // definir variáveis
    int ascii_table = 127;

    // mostrar na tela
    printf("Decimal    Hexadedimal     Caractere\n");
    for(int i = 00; i <= ascii_table; i++)
    {
        printf("%.2i              %X              %c\n", i, i, i);
    }
}