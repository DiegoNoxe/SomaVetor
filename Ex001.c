/* #Faça um programa que utilize uma função para retorna a soma do vetor: v[1, 2, 3, 9, 2, 0, -1]
*/

#include <stdio.h>

int soma(int *vetor, int tam)
{
    int resultado = 0;
    
    for(int i = 0; i<tam; i++)
    {
        resultado+=vetor[i];
    }

    return resultado;
}

int main() {
      int  v [] = {1, 2, 3, 9, 2, 0, -1};  
      int tam = sizeof(v) / sizeof(v[0]);
      printf("%d", soma(v, tam));
      return 0;
}


