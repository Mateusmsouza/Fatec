#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	struct salario
	{
		float base_value;
		float inss;
		int dependentes;
	};

	struct salario salario_func;

	printf("Entre com o salário:\n");
	scanf("%f", &salario_func.base_value);

	// calc inss
	if (salario_func.base_value <= 1683.72){
		salario_func.inss = salario_func.base_value * 0.08;
	}
	else if (salario_func.base_value >= 1683.73 && salario_func.base_value <= 2822.90){
		salario_func.inss = salario_func.base_value * 0.09;
	}else if(salario_func.base_value >= 2822.91){
		salario_func.inss = salario_func.base_value * 0.11;
	}
	printf("INSS ENCONTRADO: %f\n", salario_func.inss);

	// calc imposto renda usando [(Salário Bruto – Dependentes – INSS) • Alíquota – Dedução] = IRRF (Imposto de Renda Retido na Fonte).

	printf("Quantos depentes?\n");
	scanf("%d", &salario_func.dependentes);

	salario_func.base_value = salario_func.base_value - (salario_func.dependentes * 189.59) - salario_func.inss;

	if (salario_func.base_value <= 1903.98){
		printf("Isento de IR\n");
	}else if(salario_func.base_value >= 1903.99 && salario_func.base_value <= 2826.65){
		printf("%f\n", (((salario_func.base_value) * 0.075 ) - 142.80));
	}else if(salario_func.base_value >=  2826.66 && salario_func.base_value <= 3751.05){
		printf("%f\n", (((salario_func.base_value) * 0.15 ) - 354.80));
	}else if(salario_func.base_value <= 3751.06 && salario_func.base_value >= 4664.68){
		printf("%f\n", (((salario_func.base_value) * 0.225 ) - 636.13));
	}else if(salario_func.base_value >=  4664.68){
		printf("%f\n", (((salario_func.base_value) * 0.275 ) - 869.36

));
	}


	return 0;
}