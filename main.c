// 01 -- Considerando 2 números inteiros, calcule a soma, a subtração e a multiplicação entre eles. Por fim, mostre os resultados das operações.

#include <stdio.h> 
#include <stdlib.h> 

int main (void){

        int num1, num2, soma, sub, mult; 

        printf("digite um número:");
        scanf ("%d", &num1);

        printf("digite outro número:");
        scanf ("%d", &num2);
                
        soma = num1 + num2;
        sub = num1 - num2;
        mult = num1 * num2;

        printf("A soma dos dois números:  %d \n", soma);
        printf("A subtração dos dois números:  %d \n", sub);
        printf("A multiplicação dos dois números:  %d \n", mult);

        system("pause");

        return 0;
}

// 02 -- Sabendo que a área de um triângulo é definida como (base*altura)/2 .calcule o valor da área e mostre-o.

#include <stdio.h> 
#include <stdlib.h> 

int main (void){

        int base, altura, res; 

        printf("Base do triângulo:");
        scanf ("%d", &base);

        printf("Altura do triângulo:");
        scanf ("%d", &altura);
                
        res = (base * altura) / 2;
       
        printf("A área do triângulo é:  %d", res);

        system("pause");

        return 0;
}

