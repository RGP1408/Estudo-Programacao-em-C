#include <stdio.h>
#include <stdlib.h>

int main() {

    int Operacao;
    double Numero1, Numero2;

    printf("OPERACOES MATEMATICAS !!\n");
    printf("1 -> Soma de 2 numeros\n2 -> Diferenca entre 2 numeros\n3 -> Produto entre 2 numeros\n4 -> Divisao entre 2 numeros\n");
    printf("Escolha uma operacao:");
    scanf("%d", &Operacao);

    switch(Operacao){

        case 1: printf("SOMA\n");
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &Numero1, &Numero2);
                printf("A soma desses numeros: %0.2f\n ", Numero1 + Numero2);
                break;


        case 2: printf("SUBTRACAO\n");
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &Numero1, &Numero2);
                if(Numero1 > Numero2){
                printf("A subtracao desses numeros: %0.2f\n ", Numero1 - Numero2);
                }else{
                    printf("A subtracao desses numeros: %0.2f\n ", Numero2 - Numero1);

                }
                break;

        case 3: printf("ADICAO\n");
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &Numero1, &Numero2);
                printf("A adicao desses numeros: %0.2f\n ", Numero1 * Numero2);
                break;

        case 4: printf("DIVISAO\n");
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &Numero1, &Numero2);
                 if((Numero1 != 0) && (Numero2 != 0)){
                printf("A divisao desses numeros: %0.2f\n ", Numero1 / Numero2);
                }else{
                    printf("Os Numeros tem que ser maior que zero !!\n");
                }
                break;

    }
    system("pause");
    return 0;

}

