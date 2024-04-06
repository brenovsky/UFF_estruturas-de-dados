#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int info;
    struct pilha* prox;
} TLista;

TPilha* criaPilha() {
    return NULL;
}

TPilha* pushElemento(TPilha* topo, int valor) {
    TPilha* novo = (TPilha*) malloc(sizeof(TPilha));

    novo -> info = valor;
    novo -> prox = topo;

    return novo;
}

TPilha* popElemento(TPilha* topo) {
    if (topo == NULL) {
        return topo;
    }

    TPilha* temp = topo -> prox;
    free(topo);

    return temp;
}

TPilha* imprimirPilha(TPilha* topo) {
    if (topo != NULL) {
        printf("%d\n", topo -> info);
        imprimirPilha(topo -> prox);
    }
}

int main() {

    TPilha* pilha1;

    pilha1 = criaPilha();

    pilha1 = pushElemento(pilha1, 10);
    pilha1 = pushElemento(pilha1, 12);
    pilha1 = pushElemento(pilha1, 1);
    pilha1 = pushElemento(pilha1, 100);
    pilha1 = pushElemento(pilha1, 1222);

    pilha1 = popElemento(pilha1);
    pilha1 = popElemento(pilha1);

    imprimirPilha(pilha1);

    return 0;
}