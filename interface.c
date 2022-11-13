#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

void MSG_MENU(){

    printf("\n\t>>>>>>>>>>>>>>>>>>MENU<<<<<<<<<<<<<<<<<<");
    printf("\n\t1. MODULO 1 - GERENCIAMENTO DE LIVROS");
    printf("\n\t2. MODULO 2 - GERENCIAMENTO DE USUARIOS");
    printf("\n\t3. MODULO 3 - GERENCIAMENTO DE EMPRESTIMOS");
    printf("\n\t4. SAIR");
}

void MSG_SUBMENU(int num_modulo){

    system("cls");
    printf("\n\t>>>>>>>>>>>>>>>>>>MODULO %d<<<<<<<<<<<<<<<<<<", num_modulo);
    printf("\n\t1. Cadastrar: ");
    printf("\n\t2. Pesquisar: ");
    printf("\n\t3. Alterar: ");
    printf("\n\t4. Excluir: ");
    printf("\n\t5. Imprimir todos: ");
    printf("\n\t6. Sair");
}

void SubMenuModulo1(TModuloLivro *modulo1, TLivro book){

    int opcao = 0;
    int i;

    do{
        MSG_SUBMENU(1);
        printf("\nDigite uma opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                system("cls");
                printf("\n\n\t>>>>>>>>>>>>>>>>>>SAINDO DO MODULO!!!<<<<<<<<<<<<<<<<<<");
                system("PAUSE");
                break;
            default:
                system("cls");
                printf("\n\n\t>>>>>>>>>>>>>>>>>>DIGITE UM OPCAO VALIDA!<<<<<<<<<<<<<<<<<<");
                system("PAUSE");
        }
    }while(opcao != 6);
}

void SubMenuModulo2(TModuloUsuario *modulo2, TUsuario user){

    int opcao = 0;
    int i;

    do{
        MSG_SUBMENU(2);
        printf("\nDigite uma opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                system("cls");
                printf("\n\n\t>>>>>>>>>>>>>>>>>>SAINDO DO MODULO!!!<<<<<<<<<<<<<<<<<<");
                system("PAUSE");
                break;
            default:
                system("cls");
                printf("\n\n\t>>>>>>>>>>>>>>>>>>DIGITE UM OPCAO VALIDA!<<<<<<<<<<<<<<<<<<");
                system("PAUSE");
        }
    }while(opcao != 6);
}

void SubMenuModulo3(TModuloEmprestimo *modulo3, TEmprestimo lending){

    int opcao = 0;
    int i;

    do{
        MSG_SUBMENU(2);
        printf("\nDigite uma opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                system("cls");
                printf("\n\n\t>>>>>>>>>>>>>>>>>>SAINDO DO MODULO!!!<<<<<<<<<<<<<<<<<<");
                system("PAUSE");
                break;
            default:
                system("cls");
                printf("\n\n\t>>>>>>>>>>>>>>>>>>DIGITE UM OPCAO VALIDA!<<<<<<<<<<<<<<<<<<");
                system("PAUSE");
        }
    }while(opcao != 6);
}
