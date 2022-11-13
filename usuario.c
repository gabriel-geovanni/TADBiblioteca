#include "usuario.h"

void Read(TUsuario *user){

    printf("\nNome: ");
    fflush(stdin);
    fgets(user->nome, 100, stdin);

    printf("\nSobrenome: ");
    fflush(stdin);
    fgets(user->sobrenome, 100, stdin);

    printf("\nCPF: ");
    fflush(stdin);
    fgets(user->CPF, 15, stdin);

    printf("\nIdentidade: ");
    fflush(stdin);
    fgets(user->identidade, 15, stdin);

    printf("\nEndereco:\n");
    printf("\n\tLogradouro: ");
    fflush(stdin);
    fgets(user->local.logradouro, 100, stdin);

    printf("\n\tNumero: ");
    fflush(stdin);
    scanf("%d", &user->local.numero);

    printf("\n\tComplemento: ");
    fflush(stdin);
    fgets(user->local.complemento, 100, stdin);

    printf("\n\tBairro: ");
    fflush(stdin);
    fgets(user->local.bairro, 100, stdin);

    printf("\n\tCidade: ");
    fflush(stdin);
    fgets(user->local.cidade, 100, stdin);

    printf("\n\tCEP: ");
    fflush(stdin);
    fgets(user->local.CEP, 10, stdin);

    printf("\nData de Nascimento:\n");
    printf("\n\tDia: ");
    fflush(stdin);
    scanf("%d", &user->data_nasc.dia);

    printf("\n\tMes: ");
    fflush(stdin);
    scanf("%d", &user->data_nasc.mes);

    printf("\n\tAno: ");
    fflush(stdin);
    scanf("%d", &user->data_nasc.ano);

    printf("\nTipo de usuario(ex. aluno, professor, funcionario): ");
    fflush(stdin);
    fgets(user->tipo_usuario, 100, stdin);

    if(strcmp(user->tipo_usuario, "aluno\n") == 0){
        printf("\nCurso: ");
        fflush(stdin);
        fgets(user->curso, 100, stdin);
    }
    else{
        printf("\nDepartamento: ");
        fflush(stdin);
        fgets(user->departamento, 100, stdin);
    }

    user->quantidade_emprestimo = 0;
}

void Print(TUsuario user){

    printf("\nNome: ");
    printf("%s", user.nome);

    printf("Sobrenome: ");
    printf("%s", user.sobrenome);

    printf("CPF: ");
    printf("%s", user.CPF);

    printf("\nIdentidade: ");
    printf("%s", user.identidade);

    printf("\nEndereco:\n");
    printf("\tLogradouro: ");
    printf("%s", user.local.logradouro);

    printf("\tNumero: ");
    printf("%d", user.local.numero);

    printf("\tComplemento: ");
    printf("%s", user.local.complemento);

    printf("\tBairro: ");
    printf("%s", user.local.bairro);

    printf("\tCidade: ");
    printf("%s", user.local.cidade);

    printf("\tCEP: ");
    printf("%s", user.local.CEP);

    printf("\nData de nascimento:\n");
    printf("%d/%d/%d\n", user.data_nasc.dia, user.data_nasc.mes, user.data_nasc.ano);

    printf("\nTipo de usuario: ");
    printf("%s", user.tipo_usuario);

    if(strcmp(user.tipo_usuario, "aluno\n") == 0){
        printf("\nCurso: ");
        printf("%s", user.curso);
    }
    else{
        printf("\nDepartamento: ");
        printf("%s", user.departamento);
    }
}

void Start(TModuloUsuario *modulo2){
    modulo2->indice = 0;
}

void Register(TModuloUsuario *modulo2, TUsuario user){
    if(modulo2->indice < 100){
        printf("Não foi possivel realizar o cadastro!");
        printf("Banco de usuario cheio!");
    }
    else{
        modulo2->vetor[modulo2->indice] = user;
        modulo2->indice++;
    }
}

void Print2(TModuloUsuario modulo2){
    TUsuario usuario;

    for(int i = 0; i < modulo2.indice; i++){
        usuario = modulo2.vetor[i];
        Print(usuario);
    }
}
