#include "emprestimo.h"

void Leitura(TEmprestimo *lending){

    printf("\nCPF: ");
    fflush(stdin);
    fgets(lending->CPF, 15, stdin);

    printf("\nISBN: ");
    fflush(stdin);
    fgets(lending->ISBN, 20, stdin);

    printf("\nData de emprestimo: ");
    printf("\n\tDia: ");
    fflush(stdin);
    scanf("%d", &lending->data_de_emprestimo.dia);

    printf("\n\tMes: ");
    fflush(stdin);
    scanf("%d", &lending->data_de_emprestimo.mes);

    printf("\n\tAno: ");
    fflush(stdin);
    scanf("%d", &lending->data_de_emprestimo.ano);
}

void Mostrar(TEmprestimo lending){

    printf("\nCPF: ");
    printf("%s", lending.CPF);

    printf("\nISBN: ");
    printf("%s", lending.ISBN);

    printf("\nData de emprestimo:\n");
    printf("%d/%d/%d\n", lending.data_de_emprestimo.dia, lending.data_de_emprestimo.mes, lending.data_de_emprestimo.ano);
}

void Begin(TModuloEmprestimo *modulo3){
    modulo3->indice = 0;
}

void InserirEmprestimo(TModuloEmprestimo *modulo3, TEmprestimo lending){
    if(modulo3->indice < 100){
        printf("Não foi possivel realizar o cadastro!");
    }
    else{
        modulo3->vetor[modulo3->indice] = lending;
        modulo3->indice++;
    }
}

void Mostrar2(TModuloEmprestimo modulo3){
    TEmprestimo emprestimo;

    for(int i = 0; i < modulo3.indice; i++){
        emprestimo = modulo3.vetor[i];
        Mostrar(emprestimo);
    }
}
