#include <stdio.h>

void first()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, j;

    for(i = 0; i < 10; i++)
    {
        j = i + 1;
                printf("igual para %d = %d\n", vetor[i], vetor[j]);
            if(vetor[i] == vetor[i++])
            {
            }
    }
}

int main()
{
    unsigned int option;
    printf("escolha uma opção: ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            first();
        break;
    }
    return 0;
}