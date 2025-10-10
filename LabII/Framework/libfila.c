#include "libfila.h"

typedef struct No { 
    int dado; 
    struct No* proximo; 
} No; 

typedef struct { 
    No* inicio; 
    No* fim; 
} Fila; 

Fila* criarFila() { 
    Fila* fila = (Fila*)malloc(sizeof(Fila)); 
    fila->inicio = NULL; 
    fila->fim = NULL; 
    return fila;
}

void inserir(Fila* fila, int valor) { 
    No* novoNo = (No*)malloc(sizeof(No)); 
    novoNo->dado = valor; 
    novoNo->proximo = NULL; 
    if (fila->fim == NULL) { 
        fila->inicio = novoNo;
        fila->fim = novoNo;
    } else { 
        fila->fim->proximo = novoNo;
        fila->fim = novoNo;
    }
}