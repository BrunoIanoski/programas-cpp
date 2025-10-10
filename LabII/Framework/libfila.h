#ifndef MINHALIB_H
#define MINHALIB_H

#include <stdio.h>
#include <stdlib.h>

Fila* criarFila();
void inserir(Fila* fila, int valor);
int remover(Fila* fila);
void visualizar(Fila* fila);
//void liberarFila(Fila* fila);
int mostrarMenu();
void esperarEnter();


#endif