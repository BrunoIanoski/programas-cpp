#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreve um texto em modo texto (sobrescreve se existir) */
void write_text_overwrite(const char *filename, const char *text) {
    FILE *f = fopen(filename, "w"); // "w" cria ou sobrescreve
    if (!f) {
        perror("Erro ao abrir arquivo para escrita");
        return;
    }
    fprintf(f, "%s\n", text);
    fclose(f);
}

/* Adiciona texto no final do arquivo */
void append_text(const char *filename, const char *text) {
    FILE *f = fopen(filename, "a"); // "a" abre para append
    if (!f) {
        perror("Erro ao abrir arquivo para append");
        return;
    }
    fprintf(f, "%s\n", text);
    fclose(f);
}

/* Lê todo o arquivo de texto e imprime na tela */
void read_text(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        perror("Erro ao abrir arquivo para leitura");
        return;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), f)) {
        printf("%s", buffer); // fgets já traz o '\n' se houver
    }

    if (ferror(f)) {
        perror("Erro durante a leitura");
    }

    fclose(f);
}


int main(int argc, char *argv[]) {

    // 1) Escrever texto sobrescrevendo
    if(argc > 1) {
        if (strcmp(argv[1], "write") == 0){
            write_text_overwrite(argv[2], argv[3]);
        }

        else if(strcmp(argv[1], "append") == 0) {
        // 2) Acrescentar texto
            append_text(argv[2], argv[3]);
        }
        
        else if(strcmp(argv[1], "read") == 0) {
        // 3) Ler e mostrar conteúdo
            read_text(argv[2]);
        }
    }

    return 0;
}