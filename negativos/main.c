//Fa�a um programa que leia um n�mero inteiro positivo N (m�ximo = 10) e depois N n�meros inteiros
//e armazene-os em um vetor. Em seguida, mostrar na tela todos os n�meros negativos lidos.

#include <stdio.h>

int main()
{

    int N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS:\n");

    for (int i = 0; i < N; i++)
    {
        if (vet[i] < 0)
        {
            printf("%d\n", vet[i]);
        }
    }

    return 0;
}
