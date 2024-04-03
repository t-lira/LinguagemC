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

// 3 -- Dado um número inteiro, calcule e mostre o dobro do seu valor.

#include <stdio.h> 
#include <stdlib.h> 

int main(void){

        int numeroInteiro, dobro;

        printf("Digite um número inteiro: ");
        scanf("%d", &numeroInteiro);

        dobro = numeroInteiro * 2;

        printf("O dobro do número é:  %d\n", dobro);

        system("pause");
        return 0;
}

// 4. Tendo como base o salário de um funcionário, faça um acréscimo de 30% sobre o salário e, por fim, mostre o novo salário.

#include <stdio.h>
#include <stdlib.h>

int main (void){

        int salario, novoSalario, acrescimo;

        printf("Digite o sálario do funcionário:");
        scanf("/f", &salario);

        // Calculando o acréscimo de 30%
        acrescimo = salario * 0.3;

        // Calculando o novo salário
        novoSalario = salario + acrescimo;

        // Mostrando o novo salário
        printf("O novo salário do funcionário com o acréscimo é: R$%.2f\n", novoSalario);

        system("pause");
        return 0;
}