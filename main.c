#include "list.h"
#include <stdio.h>
int main() {
    int tamanho, identificador, i;
    scanf("%d", &tamanho);
    List * A = list_new(tamanho);
    for(i=0; i < tamanho; i++){
        scanf("%d", &identificador);
        list_insert(A, identificador);
    }
    scanf("%d", &tamanho);
    List * B = list_new(tamanho);
    for(i=0; i < tamanho; i++){
        scanf("%d", &identificador);
        list_insert(B, identificador);
    }
    list_print(A);
    list_print(B);
    
    remove_elementos_comuns(A,B);
    
    list_print(A);
    
    list_free(A);
    list_free(B);
    return 0;
}