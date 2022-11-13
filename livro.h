#ifndef LIVRO_H_INCLUDED
#define LIVRO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}TData;

typedef struct livro{
    char ISBN[20];
    char titulo[100];
    char editora[100];
    char local[100];
    TData data_pub;
    char prim_autor[100];
    char seg_autor[100];
    int quantidade;
    int quant_emprestados;
}TLivro;

typedef struct modulo_livro{
    TLivro vetor[100];
    int indice;
}TModuloLivro;

void Ler(TLivro *book);
void Imprimir(TLivro book);
void Iniciar(TModuloLivro *modulo1);
void Cadastrar(TModuloLivro *modulo1, TLivro book);
void Imprimir2(TModuloLivro modulo1);

#endif
