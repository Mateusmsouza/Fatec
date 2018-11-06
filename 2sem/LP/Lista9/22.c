/*  Deﬁnir a estrutura cuja representacao graﬁca e dada a seguir, deﬁnir os campos com os tipos basicos necessarios.
CADASTRO
nome            endereco    salario
identidade     cpf              estado civil
telefone        idade           sexo

O ENDERECO E COMPOSTO DE:
rua         bairro      cidade
estado    cep
*/

typedef struct {
    char rua[255], bairro[100], cidade[50], estado[50], cep[15];
} Endereco;

typedef struct {
    char nome[50], identidade[10], cpf[15], estado_civil, telefone[15], sexo;
    int idade;
    float salario;
    Endereco endereco;
} Cadastro;

