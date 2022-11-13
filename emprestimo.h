#ifndef EMPRESTIMO_H_INCLUDED
#define EMPRESTIMO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "usuario.h"

typedef struct emprestimo{
    TUsuario CPF[15];
    TLivro ISBN[20];
    TData data_de_emprestimo;
    TData data_de_entrega;
    TData data_de_devolucao;
    int multa;
}TEmprestimo;

typedef struct modulo_emprestimo{
    TEmprestimo vetor[100];
    int indice;
}TModuloEmprestimo;

void Leitura(TEmprestimo *lending);
void Mostrar(TEmprestimo lending);
void Begin(TModuloEmprestimo *modulo3);
void InserirEmprestimo(TModuloEmprestimo *modulo3, TEmprestimo lending);
void Mostrar2(TModuloEmprestimo modulo3);

#endif
