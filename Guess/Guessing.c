#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check(int input, int random, int tentativas);
int main(void)
{
    srand(time(0));

    int numero_aleatorio = (rand() % 20) + 1;
    int palpite;
    int tentativas = 0;

    check(palpite, numero_aleatorio, tentativas);
}

int check(int input, int random, int tentativas)
{ 
    printf("Adivinhe um numero entre 0 - 20: ");
    scanf("%d", &input);
    tentativas++;

    if (input  < 0 || input > 20)
    {
        printf("Numero invalido, encolha apenas entre 0 - 20!\n");
        return check(input, random, tentativas);
    }

    if (random == input)
    {
        printf("Parabens voce acertou, o numero era: %d\n", random);
        printf("Numero de tentativas: %d\n", tentativas);
        return 0;
    }

    else if (random != input)
    {
        printf("Desculpe numero errado, Tente novamente\n");
        return check(input, random, tentativas);
    }
}
