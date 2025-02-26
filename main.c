#include <stdio.h>
#include <math.h>

float result;
float funA(int repeat){
    while(repeat > 0) {
        result += (repeat + (repeat-1))/ pow(repeat, 2);
        repeat--;
    };
    return result;
};
float funB(int repeat){
    do{
        
        repeat--;
    }while(repeat > 0);

    return result;
};
float funC(int repeat){
    for(; repeat > 0; repeat--){

    }
    return result;
};

int main(void) {
    
    char opt;

    // printf("Seleciona a opcao desejada: A, B, C, ou D (para sair)!");
    // do {
    //     printf("Qual opcao deseja?");
    //     scanf("%c", opcao);
    //     if (opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D') {
    //         printf("Opcao invalida, selecione uma das opcoes disponiveis.");
    //     }else{
    //         do{
    //             printf("Seleciona a quantidade de termos que deseja soma (positiva e inteira):");
    //             scanf("%i", qtdTermo);
    //             if(qtdTermo <= 0) {
    //                 printf("Invalido!\nTente novamente.");
    //             }
    //         }while(qtdTermo <= 0);
    //     };
    // }while(opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D');
    // if (opcao == 'A'){
    //     int opcaoA;
    //     while(qtdTermo > 0){
    //         opcaoA = ((n+1) + n)/n;
    //     };
    //     printf("Somatorio da opcao A: %i\n", opcaoA);
    // }else if(opcao == 'B'){
    //     int opcaoB;
    //     do{
    //         opcaoB = ((n+1) + n)/n;
    //     }while(qtdTermo > 0);
    //     printf("Somatorio da opcao A: %i\n", opcaoB);
    // };

    return 0;
}