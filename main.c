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

// 5 -- Escreva um algoritmo para exibir a situação de um aluno (Aprovado ou Reprovado) a partir do cálculo da média de 4 avaliações. O aluno é considerado aprovado caso sua média seja maior ou igual a 6; caso contrário ele é reprovado.

#include <stdio.h>
#include <stdlib.h>

int main (void){

        int notaUm, notaDois, notaTres, notaQuatro, media;

        // Solicita as notas ao usuário
        printf("Digite a nota da primeira prova");
        scanf("%d", &notaUm);
        
        printf("Digite a nota da segunda prova");
        scanf("%d", &notaDois);

        printf("Digite a nota da terceira prova");
        scanf("%d", &notaTres);

        printf("Digite a nota da quarta prova");
        scanf("%d", &notaQuatro);

        // Calcula a média corretamente
        media = (notaUm + notaDois + notaTres + notaQuatro) / 4;

        // Verifica se a média é maior ou igual a 6
        if(media >= 6){
                printf("Aluno, aprovado!\n");
        } else {
                printf("Aluno, reprovado!\n");  
        }

        system("pause");

        return 0;
}

// 6. Escreva um algoritmo para verificar a paridade (par ou ímpar) de um número inteiro digitado pelo usuário. 

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;

    // Solicita o número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    system("pause");

    return 0;
}