#include<stdio.h>
#include<stdlib.h>

int calculo_imc(float *peso, float *altura);

void classificacao(float *imc);

int main(void)
{
	float peso, altura = 0;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	calculo_imc(&peso, &altura);
}

int calculo_imc(float *peso, float*altura)
{
	float resultado;
	resultado = *peso / (*altura * *altura);
	
	classificacao(&resultado);
	
	return 0;
}

void classificacao(float *imc)
{
	system("cls");
	printf("Seu resultado esta pronto\n\n");
	system("pause");
	system("cls");
	printf("Resultado: ");
	
	if(*imc < 18.5)
	{
		printf("Baixo Peso");
	}
	
	else if(*imc >= 18.5 && *imc < 24.9)
	{
		printf("Peso Normal");
	}
	
	else if(*imc >= 25 && *imc < 29.9)
	{
		printf("Excesso de Peso");
	}
	
	else if(*imc >= 30 && *imc < 34.9)
	{
		printf("Obesidade classe 1");
	}
	
	else if(*imc >= 35 && *imc < 39.9)
	{
		printf("Obesidade classe 2");
	}
	
	else
	{
		printf("OBESIDADE MORBIDA");
	}
	
	printf("\n\n");
	system("pause");
}
