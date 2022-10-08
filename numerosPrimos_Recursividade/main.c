#include<stdio.h>
#include<math.h>

int primo(int i, int num){

    if(num==i){
        return 0;
    }else{
        if(num%i == 0){
            return 1;
        }else{
            return primo(i+1,num);
        }
    }
}//primo

int main()
{
    int soma = 0;
    int n, i = 2;

    printf("Digite o valor maximo: ");
    scanf("%i",&n);

    printf("\n");
    printf("Numeros primos entre 1 e %i: ", n);

    while (i <= n){
        if(primo(2,i)==0){
            printf("%d ",i);
            soma = i + soma;
        }
        i++;
    }

    printf("\nSomatorio dos valores: %i\n\n", soma);
    system("pause");
}

