#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main (){

    int anoAtual, anoNasc, idade;
    float meses, dias, semanas;

    printf("\t------- Fa�a um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e a idade em dias, semans, meses e anos  --------\t\n\n");

	printf("Digite o ano atual: ");
	scanf("%i", &anoAtual);

	printf("Digite o ano de nascimento: ");
	scanf("%i", &anoNasc);

	idade = anoAtual - anoNasc;
	meses = idade * 12;
	dias = idade * 365;
	semanas = dias / 7;


	printf("\nO ano Atual �: %i", anoAtual);
	printf("\nO ano de nascimento �: %i", anoNasc);
	printf("\nA idade �: %i", idade);
	printf("\nA idade em meses �: %.2f", meses);
	printf("\nA idade em semanas �: %.2f", semanas);
	printf("\nA idade em dias �: %.2f", dias);
    printf("\n\n");


    system("PAUSE");
    return 0;
}
