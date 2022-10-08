#include <stdio.h>
#include <stdlib.h>

int nPerfeito(int n){
    int i = 1, smDiv;
    smDiv = 0;

    while(i <= (n/2)){
        if(n%i == 0){
            smDiv = smDiv + i;
        }
        i++;
    }
    return(n == smDiv);
}//nPerfeito

int main(){
    int n = 1, max;

    printf("Defina o valor maximo: ");
    scanf("%i", &max);

    printf("\n");
    printf("Sequencia: ");
    while(n <= max){
        if (nPerfeito(n)){
            printf("%i\t", n);
        }
        n++;
    }
    printf("\n");
    system("pause");
}//main
