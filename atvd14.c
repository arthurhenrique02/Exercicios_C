/*14) A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tc
é a temperatura em Celsius e Tf em Fahrenheit. Faça um programa C que calcule e que
imprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de
1 em 1. (0,1)*/

#include <stdio.h>

// função de conversão
float converter(float x);

int main(void)
{

    // mostrar de 40 a 75 graus celcius, convertendo para Fahrenheit e mostrando tambem
    printf("Celcius         Fahrenheit\n");
    for (int i = 40; i <= 75; i++)
    {
        printf("%.1fºC            %.1fºF\n", (float)i, converter(i));
    }

    return 0;
}

float converter(float x)
{
   return (x * 9 / 5) + 32;
}