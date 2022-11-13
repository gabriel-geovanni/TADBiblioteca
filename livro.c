#include "livro.h"

void Ler(TLivro *book){

    printf("\nISBN: ");
    fflush(stdin);
    fgets(book ->ISBN, 20, stdin);

    printf("\nTitulo: ");
    fflush(stdin);
    fgets(book->titulo, 100, stdin);

    printf("\nEditora: ");
    fflush(stdin);
    fgets(book->editora, 100, stdin);

    printf("\nLocal  de publicacao: ");
    fflush(stdin);
    fgets(book->local, 100, stdin);

    printf("\nData de publicacao:\n");
    printf("\n\tDigite o dia: ");
    fflush(stdin);
    scanf("%d", &book->data_pub.dia);

    printf("\n\tDigite o mes: ");
    fflush(stdin);
    scanf("%d", &book->data_pub.mes);

    printf("\n\tDigite o ano: ");
    fflush(stdin);
    scanf("%d", &book->data_pub.ano);

    printf("\nDigite o primeiro autor do livro: ");
    fflush(stdin);
    fgets(book->prim_autor, 100, stdin);

    printf("\nDigite o segundo autor do livro: ");
    fflush(stdin);
    fgets(book->seg_autor, 100, stdin);

    printf("\nDigite a quantidade no acervo: ");
    fflush(stdin);
    scanf("%d", &book->quantidade);

    book->quant_emprestados = 0;
}

void Imprimir(TLivro book){

    printf("\nISBN: ");
    printf("%s", book.ISBN);

    printf("\nTitulo: ");
    printf("%s", book.titulo);

    printf("\nEditora: ");
    printf("%s", book.editora);

    printf("\nLocal de publicacao: ");
    printf("%s", book.local);

    printf("\nData de publicacao:\n");
    printf("%d/%d/%d\n", book.data_pub.dia, book.data_pub.mes, book.data_pub.ano);

    printf("\nPrimeiro autor: ");
    printf("%s", book.prim_autor);

    printf("\nSegundo autor: ");
    printf("%s", book.seg_autor);

    printf("\nQuantidade de livros no acervo: ");
    printf("%d", book.quantidade);

    printf("\nQuantidade de livros emprestados: ");
    printf("%d", book.quant_emprestados);
}

void Iniciar(TModuloLivro *modulo1){
    modulo1->indice = 0;
}

void Cadastrar(TModuloLivro *modulo1, TLivro book){
    if(modulo1->indice < 100){
        printf("Não foi possivel realizar o cadastro!");
        printf("Biblioteca cheia!");
    }
    else{
        modulo1->vetor[modulo1->indice] = book;
        modulo1->indice++;
    }
}

void Imprimir2(TModuloLivro modulo1){
    TLivro livro;

    for(int i = 0; i < modulo1.indice; i++){
        livro = modulo1.vetor[i];
        Imprimir(livro);
    }
}
