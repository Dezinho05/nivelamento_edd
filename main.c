#include <stdio.h>
#include <math.h>
#include <ctype.h>

float funA(int repeat){
    float result = 0.0;
    while(repeat > 0) {
        result += (repeat + (repeat-1))/ pow(repeat, 2);
        repeat--;
    };
    return result;
};
float funB(int repeat){
    float result = 0.0;
    do{
        result += (pow(repeat, 3)/pow(10, repeat-1));
        repeat--;
    }while(repeat > 0);

    return result;
};
float funC(int repeat){
    float result = 0.0;
    for(; repeat > 0; repeat--){
        result += repeat/(3 * (repeat * 2));
    }
    return result;
};

int Repeat(int repeat){
    printf("Insira a quantidade de termos que deseja calcular");
    do{
        scanf("%i", repeat);
        if(repeat < 1){
            printf("Invalido. Insira um valor positivo:");
        };
    }while(repeat < 1);
    return repeat;
}

void menu(){
    setbuf(stdout, NULL);
    char opt;
    printf("Digite a opção deseja\n 'A'\n 'B'\n 'C'\n 'D'(para sair).");
    scanf("%c", opt);

    switch(toupper(opt)){
        case 'A':
            printf("Resultado: %0.2f\n\n", funA(Repeat()));
            menu();
            break;
        case 'B':
            printf("Resultado: %0.2f\n\n", funB(Repeat()));
            menu();
    
            break;
        case 'C':
            printf("Resultado: %0.2f\n\n", funC(Repeat()));
            menu();
            break;
        case 'D':
            printf("--Finalizado--");
            break;
    
        default:
            printf("\Insira uma opcao valida.\n");
            menu();
            break;
}

int main(void) {
    menu();
  
    return 0;
}