#include <stdio.h>
int main()
{
    int num, resto;
     printf("Digite um numero e diremos se ele e par ou impar\n\n");
    scanf("%d", &num);
    resto = num % 2;
    if (resto==0)
    {
       printf("\nO numero %d e par. \n",num);
    }
    else
    {
        printf("\nO numero %d e impar. \n",num);
    }
    
}
