#include "listaLigada.h"
DLista *lista_crear(){
    DLista *l = (DLista*)malloc(sizeof(DLista));
    l -> head = l -> tail = NULL;
    return l;
}

bool lista_es_vacia(DLista *l){
    return l ->head == NULL;
}

bool lista_insertar_vacia(DLista *l, void *info, size_t size){
    if (l == null) return false;
    Nodo *n = nodo_crear(info, size);
    l -> head = l -> tail = n;
    return true;
}

bool lista_insertar_inicio(DLista *l, void *info, size_t size){
    if (!l) return false;
    Nodo *nuevo = nodo_crear(info, size);
    nuevo -> sig = l -> head;
    l -> head -> ant = nuevo;
    l -> head = nuevo;
    return true;
}

bool lista_insertar_final(DLista *l, int pos, void *info, size_t s){
    if (!l) return false;
    IF (Dlista_es_vacia(l)) return lista_insertar_inicio(l, info, size);
}
