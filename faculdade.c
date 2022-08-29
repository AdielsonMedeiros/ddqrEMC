#include <stdio.h>
#include <stdlib.h>

int main()
{

    float quo;
    int a,b, res;

    printf("Mostrador de Dividendo, Divisor, Quociente e Resto de dois numeros \n" );

    printf("Informe o Primeiro Numero \n");
    scanf("%d", &a);

    printf("Informe o Segundo Numero \n");
    scanf("%d", &b);
    

    printf("O Dividendo dos numero informados = %d \n", a);
    printf("O Divisor dos numeros informados = %d \n", b);

    quo = (a / b);

    printf("O Quociente dos numeros informados = %f \n", quo);

     
    res = (a % b);  
    printf("O Resto da Divisao dos numeos informados = %d \n", res);



    return 0;

}