#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"

int main()
{

    int opcao = 0;

    TLivro book;
    TModuloLivro modulo1;

    TUsuario user;
    TModuloUsuario modulo2;

    TEmprestimo lending;
    TModuloEmprestimo modulo3;

    Iniciar(&modulo1);
    Start(&modulo2);
    Begin(&modulo3);

    do{
        system("cls");
        MSG_MENU();
        printf("\nDigite um opcao: ");
        fflush(stdin);
        scanf("%d", opcao);

        switch(opcao){

            case 1:
                SubMenuModulo1(&modulo1, book);
                break;
            case 2:
                SubMenuModulo2(&modulo2, user);
                break;
            case 3:
                SubMenuModulo3(&modulo3, lending);
            case 4:
                system("cls");
                printf("\n\n\t>>>>>>>>>>>>>>>>>>SAINDO DO PROGRAMA<<<<<<<<<<<<<<<<<<");
                break;
            default:
                system("cls");
                printf("\n\n\t>>>>>>>>>>>>>>>>>>DIGITE UM OPCAO VALIDA!<<<<<<<<<<<<<<<<<<");
                system("PAUSE");
        }
    }while(opcao != 4);

    return 0;
}
