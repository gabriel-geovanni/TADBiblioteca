#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "livro.h"
#include "usuario.h"
#include "emprestimo.h"

void MSG_MENU();
void MSG_SUBMENU(int num_modulo);
void SubMenuModulo1(TModuloLivro *modulo1, TLivro book);
void SubMenuModulo2(TModuloUsuario *modulo2, TUsuario user);
void SubMenuModulo3(TModuloEmprestimo *modulo3, TEmprestimo lending);

#endif // INTERFACE_H_INCLUDED
