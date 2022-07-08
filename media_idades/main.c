//Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
//indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa. Calcular
//e imprimir a idade m�dia deste grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
//mostrar a mensagem "IMPOSSIVEL CALCULAR".

#include <stdio.h>

int main()
{

    int idade, cont, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma = 0;
    cont = 0;

    while (idade >=0 )
    {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d", &idade);
    }

    if (cont == 0)
    {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else
    {
        media = (double)soma / cont;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
}
