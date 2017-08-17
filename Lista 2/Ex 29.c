#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_RAND 100    // CONSTANTE que guarda o valor maximo que o numero aleatorio pode ter

int main(void)
{
    int x, y;   // Armazena os dois numeros aleatorios
    int r;      // Armezena a resposta
    int s = 0;  // Incremeto da pontuacao(caso acerte)

    // A fun��o void srand (unsigned int seed) permite variar
    // o primeiro elemento, que serve como semente da sequ�ncia.
    // Caso contr�rio, os numeros gerados sempre vao ser iguais
    srand((unsigned) time(NULL));

    // PRIMEIRA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;     // gera e armazena x e y aleatorios temporariamente
    printf("Quanto � %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    // SEGUNDA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;
    printf("Quanto � %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    // TERCEIRA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;
    printf("Quanto � %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    // QUARTA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;
    printf("Quanto � %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }
    // QUINTA PERGUNTA
    x = rand() % MAX_RAND, y = rand() % MAX_RAND;
    printf("Quanto � %d + %d? -> ", x, y);
    scanf("%d", &r);
    if(r == x+y)
    {
        printf("\n+--------+\n");
        printf("| Certo! |\n");
        printf("+--------+\n\n");
        s++;
    }
    else
    {
        printf("\n+---------+\n");
        printf("| Errado! |\n");
        printf("+---------+\n\n");
    }

    printf("+---------------------------+\n");
    printf("| Voc� acertou %d questoes!  |\n", s);
    printf("+---------------------------+\n\n");

    return 0;
}
/*Contact GitHub API Training Shop Blog About
� 2017 GitHub, Inc. Terms Privacy Security Status Help
https://github.com/lukkaslt/Linguagem-C-Descomplicada/blob/master/Exercicios/02-comandosDeControleCondicional.md
*/
