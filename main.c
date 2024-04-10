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

// 7 -- Escreva um algoritmo que mostre se um número inteiro, digitado pelo usuário, é positivo ou negativo.

#include <stdio.h>
#include <stdlib.h>

int main (void){

        int numero;

        // Solicita o número ao usuário
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

        // Verifica se o número é positivo, negativo 
        if (numero > 0) {
                printf("O número %d é positivo.\n", numero);
        } else if (numero < 0) {
                printf("O número %d é negativo.\n", numero);
        } else {
                printf("O número é zero.\n");
        }

        system("pause");
        return 0;
}

// 8 -- feita a leitura de dois valores numéricos inteiros, denominados A e B. Em seguida, é efetuada a adição entre eles e o resultado dessa operação só é exibido caso seu valor seja maior que 10.

#include <stdio.h>
#include<stdlib.h>

int main(void){

        int valorA,valorB, adicao;

        printf("Digite um valor: ");
        scanf("%d", &valorA);

        printf("Digite um segundo valor: ");
        scanf("%d", &valorB);

        adicao = valorA + valorB;

        // Verifica se o número é maior que dez
        if (adicao > 10) {
                printf("O resultado da adicao (%d) é maior que 10.\n", adicao);
        } else {
                printf("O resultado da adicao não é maior que 10.\n");
        }
        
        system("pause");

        return 0;
}


// 9.feita a leitura do salário de um funcionário. Em seguida, caso o salário informado seja menor ou igual a 2000, então é feito o acréscimo de 30% sobre seu valor. Por fim, o novo salário é exibido.

#include <stdio.h>
#include<stdlib.h>

int main(void){

        float salarioFuncionario, novoSalario, acrescimo;

        printf("informe o sálario do funcionario: ");
        scanf("%f", &salarioFuncionario);

        // Verificando se o salário é menor ou igual a 2000
        if (salarioFuncionario <= 2000) {

        // Calculando o acréscimo de 30%
        acrescimo = salarioFuncionario * 0.3;

        // Calculando o novo salário
        novoSalario = salarioFuncionario + acrescimo;

        printf("O novo salário é: %.2f\n", novoSalario);
        } else {
        printf("O salário atual é: %.2f\n", salarioFuncionario);
        }

        return 0;
}

// 10. feita a leitura de dois valores numéricos inteiros. Caso a adição entre eles resulte em um valor maior ou igual a 10, será atribuído a uma nova variável o valor resultante somado a 5. Caso contrário (adição menor que 10), será atribuído a uma nova variável o valor resultante subtraído de 7. Por fim, o valor da nova variável será exibido.

#include <stdio.h>
#include <stdlib.h>

int main (void) {

        int primeiroValor, segundoValor, adicao, valorFinal;

        // Solicita o primeiro valor ao usuário
        printf("Primeiro valor: ");
        scanf("%d", &primeiroValor);

        // Solicita o segundo valor ao usuário
        printf("Segundo valor: ");
        scanf("%d", &segundoValor);

        adicao = primeiroValor + segundoValor;

        // Verifica os dados inseridos
        if (adicao >= 10) {
                valorFinal = adicao + 5;
                printf("Resultado: %d\n", valorFinal);
          
        }else{
                valorFinal = adicao - 7 ;
                printf("Resultado: %d\n", valorFinal);
        }
        
        getchar( );
        return 0;
}

// 11. é feita a leitura do salário de um funcionário. Em seguida, caso o salário informado seja menor ou igual a 2000, então é feito o acréscimo de 30% sobre seu valor. Caso contrário (salário maior do que 2000), será feito um acréscimo de 10% sobre seu valor. Por fim, o novo salário é exibido.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
        // Declaração das variáveis
        float salarioFuncionario, novoSalario, acrescimo;

        // Solicita o salário do funcionário ao usuário
        printf("Informe o salário do funcionário: ");
        scanf("%f", &salarioFuncionario);

        // Verifica se o salário é <= 2000
        if (salarioFuncionario <= 2000) {
                // Calcula o acréscimo de 30%
                acrescimo = salarioFuncionario * 0.3;
        } else {
                // Calcula o acréscimo de 10%
                acrescimo = salarioFuncionario * 0.1;
        }

        // Calcula o novo salário
        novoSalario = salarioFuncionario + acrescimo;

        // Exibe o novo salário
        printf("O novo salário é: %.2f\n", novoSalario);

        getchar();
        return 0;
}

// 12. Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 500. Se o salário for maior ou igual a 500, mas menor ou igual a 1000, seu reajuste será de 10%; caso seja ainda maior que 1000, o reajuste deverá ser de 5%. No final do algoritmo, o valor do novo salário é exibido.

#include <stdio.h>
#include <stdlib.h>
 
main (){
        // Declaração das variáveis
        float salario, novo_salario;

        // Solicita o salário do funcionário ao usuário
        printf ("\n Digite o salario:");
        scanf ("%f", &salario);

        // Verifica se o salário é menor que 500
        if (salario < 500) {
                // Se o salário for menor que 500, o reajuste é de 15%
                novo_salario = salario * 1.15;
        }
        else {
                if (salario <= 1000) {
                        // Se o salário estiver entre 500 e 1000, o reajuste é de 10%
                        novo_salario = salario * 1.10; 
                }
                else {
                        // Se o salário for maior que 1000, o salário não é alterado
                        novo_salario = salario * 1.05; 
                }        
        }

        // Exibe o novo salário
        printf ("\n Novo salario:%.2f", novo_salario);
        
        getchar();
        return 0;
}

//13. feita uma operação sobre um número inteiro de acordo com o seu sinal (positivo, negativo ou igual a zero). Caso o número seja positivo, será adicionado 5 ao seu valor; se ele for negativo, será multiplicado 7 ao seu valor e, caso seja igual a zero, será subtraído 3 ao seu valor. Por fim, o número inteiro atualizado será exibido.

#include <stdio.h>
#include <stdlib.h>
 
main (){
        int valor;

        // Solicita o valor ao usuário
        printf ("\n Digite o valor de x:");
        scanf ("%d", &valor);
 
        // Verifica o sinal do valor
        if (valor > 0) {
                // Se o valor for positivo, adiciona 5 ao seu valor
                valor = valor + 5;
        }
        else {
                if (valor < 0) { 
                        // Se o valor for negativo, multiplica por 7
                        valor = valor * 7;
                }
                else {
                        // Se o valor for igual a zero, subtrai 3
                        valor = valor - 3;
                }
        }
        
        // Exibe o novo valor de x
        printf ("\n Novo Valor de x:%d", valor);

        getchar();
        return 0;
}

//14- cálculo da média para 10 alunos. O processo de contagem ocorre por meio da expressão aritmética que obtém o valor da variável cont e adiciona 1, armazenando esse resultado na própria variável cont. Repetindo esse comando várias vezes, perceberemos que a variável vai aumentando gradativamente de valor (de 1 em 1), simulando a contagem das execuções. Este exemplo pode ser observado a seguir:

#include <stdio.h>
#include <stdlib.h>

main () {

  int cont;
  float n1, n2, n3, m;
  cont = 1;
 
  while (cont <= 10) {
 
    printf ("Digite 3 notas \n");
    scanf ("%f%f%f", &n1, &n2, &n3);

    m = (n1 + n2 + n3) /3;

    printf ("Media: %.2f\n", m);
    cont = cont + 1;
 
  }

  getchar();
  return 0;
}

//15 - cálculo do somatório (soma acumulada) de apenas número positivos, os quais deverão ser definidos pelo usuário (por leitura). O somatório é feito enquanto o usuário digitar um número positivo e, quando ele digitar um número negativo, o laço é encerrado. Por fim, o valor do somatório é mostrado no final do algoritmo.

#include <stdio.h>

int main(void) {
        int numero, soma = 0;

        // Leitura do primeiro número
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &numero);

        // Loop para leitura e soma de números positivos
        while (numero >= 0) {
        soma += numero;

        // Leitura do próximo número
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &numero);
        }

        // Exibição do resultado
        printf("Somatório dos números positivos: %d\n", soma);

        getchar();
        return 0;
}



//16 - verifique se uma "senha" numérica digitada pelo usuário está correta. O programa deve repetir o pedido até que o usuário escreva o valor correto. A senha deve estar definida no próprio programa.

#include <stdio.h>

int main(void) {
        int senha, tentativa;

        // Definindo a senha correta
        const int senha_correta = 5236;

        // Loop para solicitar a senha
        do {
        // Solicitando a senha ao usuário
        printf("Digite a senha: ");
        scanf("%d", &tentativa);

        // Verificando se a senha é válida
        if (tentativa != senha_correta) {
        printf("Senha incorreta. Tente novamente.\n");
        }
        } while (tentativa != senha_correta);

        // Mensagem de sucesso
        printf("Senha correta!\n");

        getchar();

        return 0;
}

//17 - mostre na tela todos os números múltiplos de 3 até um certo número N digitado pelo usuário. Exemplo: usuário digita 14, aparece em tela: 3, 6, 9, 12.

#include <stdio.h>

int main() {
  int numero, i;

  // Leitura do número limite
  printf("Digite um número: ");
  scanf("%d", &numero);

  // Loop para mostrar os múltiplos de 3
  for (i = 3; i <= numero; i += 3) {
    printf("%d ", i);
  }

  printf("\n");

  return 0;
}