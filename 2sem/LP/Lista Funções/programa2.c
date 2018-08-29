#include <stdio.h>
#include <locale.h>


// Calculo de IRPF
int calcula_RPF(float salario){
  float salario_fixo;
  salario_fixo = salario;


  if (salario_fixo <= 1903.98){
    printf("Isento.\n");
  }
  else if (salario_fixo > 1903.98){
    if (salario_fixo >= 2826.65){

      salario = (salario - 922.67);
      printf("Base do Calculo | Aliquota | Faixa/Parcela\n");
      printf("Até 1903,98     |   ----   |    -------     \n");
      printf("De 1903.99 Até 2826.65| 7,5 | 2º: %.2f\n", (922.67*0.075));
    }else{
      salario = (salario - 1903.98);
      printf("Base do Calculo | Aliquota | Faixa/Parcela\n");
      printf("Até 1903,98     |   ----   |    -------     \n");
      printf("De 1903.99 Até 2826.65| 7,5 | 2º : %.2f\n", (salario*0.075));
    }
  }

  if (salario_fixo > 2826.65){
    if (salario_fixo >= 3751.05){
      salario = (salario - 924.40);
      printf("De 2826,66 até 3751,05 | 15 | 3º: %.2f\n", (924.40 * 0.15) );
    }else{
      salario = (salario_fixo - 2826.66);
      printf("De 2826,66 até 3751,05 | 15 | 3º: %.2f\n", (salario * 0.15) );
    }

  }

  if (salario_fixo > 3751.05){
    if (salario_fixo>= 4664.68){
      salario = (salario - 913.63);
      printf("De 3751,06 até 4664,68 | 22,5 | 4º: %.2f\n", (913.63  * 0.225));
    }else{
      salario = (salario_fixo - 3751.06);
      printf("De 3751,06 até 4664,68 | 22,5 | 4º: %.2f\n", (salario * 0.225));
    }
  }

  if (salario_fixo > 4664.68){
      printf("Acima de 4.463,81 | 27,5 | 5º: %.2f\n", ( (salario_fixo-4664.68) * 0.275));
    }

  return 1;
}

int reajuste(float salario){
  if (salario < 1000){
    printf("Novo salario:%.2f\n", (salario * 1.4) );
  }else if(salario >= 1000 && salario <7500){
    printf("Novo salario:%.2f\n", (salario * 1.3) );
  }else if(salario >= 7500 && salario < 15000){
    printf("Novo salario: %.2f\n", (salario * 1.2));
  }else if(salario > 15000){
    printf("Novo salario: %.2f\n", (salario * 1.1));
  }

  return 1;
}

void classifica(float salario){

  if (salario <= 7000){
    printf("Mal remunerado\n");
  }else{
    printf("Bem remunerado\n");
  }

}

int main(){
  float salario;
  int decisao;

  printf("Manda o salário ai.\n");
  scanf("%f", &salario);

  printf("Escolha uma opção caso usuário.\n1- Imposto\n2- Novo salário\n3-Classificação\n");
  scanf("%d", &decisao);


  switch(decisao){
    case 1: calcula_RPF(salario);
            break;
    case 2: reajuste(salario);
            break;
    case 3: classifica(salario);
            break;
    default: printf("ERROR 404\n Opção Inválida.\n");
  }

  return 0;
  system("pause");
}
