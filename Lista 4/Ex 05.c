#include <stdio.h>
#include <stdlib.h>

int main (){

    int Vetor[10], i, pares = 0;

    for(i = 0; i < 10; i++){
        printf("Digite %d Numero: ", i);
        scanf("%d", &Vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if(Vetor[i] % 2 == 0){
            pares += 1;
        }
    }
    printf("Valores pares %d no vetor\n", pares);

    system("pause");
    return 0;


}

