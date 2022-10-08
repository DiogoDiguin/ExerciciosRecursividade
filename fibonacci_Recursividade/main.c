#include <stdio.h>
#include <stdlib.h>

int fib(int pos){
    int resultado;

    if(pos == 1){
        return 0;
    }else{
        if(pos == 2){
            return 1;
        }else{
            return fib(pos -1) + fib(pos -2);
        }
    }
}//fib

int main()
{
    int i, num;
    printf("Digite o valor: ");
    scanf("%i", &num);

    printf("\n");
    for(i = 1; i <= num; i++){
        printf("Numero referente a %ia posicao: %i\n", i, fib(i));
    }
    printf("\n");
    system("pause");

}//main
