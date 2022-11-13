#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "livro.h"

typedef struct endereco{
    char logradouro[100];
    int numero;
    char complemento[100];
    char bairro[100];
    char cidade[100];
    char CEP[10];
}TEndereco;

typedef struct usuario{
    char nome[100];
    char sobrenome[100];
    char CPF[15];
    char identidade[15];
    TEndereco local;
    TData data_nasc;
    char tipo_usuario[100];
    char curso[100];
    char departamento[100];
    int quantidade_emprestimo;
}TUsuario;

typedef struct modulo_usuario{
    TUsuario vetor[100];
    int indice;
}TModuloUsuario;

void Read(TUsuario *user);
void Print(TUsuario user);
void Start(TModuloUsuario *modulo2);
void Register(TModuloUsuario *modulo2, TUsuario user);
void Print2(TModuloUsuario modulo2);

#endif
