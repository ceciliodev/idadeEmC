#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;

    int idade;

    printf("qual e o seu nome?\n");
    scanf("%s", &nome);

    printf("e seu sobrenome \n");
    scanf("%s", &sobrenome );

    printf("quando voce nasceu ?\n");
    scanf("%d", &ano_nascimento);

    printf("certo legal %s %s...qual e a sua idade?\n",nome,sobrenome);
    scanf("%d", &idade);
    printf("certo muito bom! voce %s %s \n",nome,sobrenome);
    printf(" tem %d\n",idade);
    printf("e nasceu em %d\n",ano_nascimento);


    return 0;
}
