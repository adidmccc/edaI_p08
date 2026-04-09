#include "nodo.h"
#ifndef __LISTA_LIGADA_H__
#define __LISTA_LIGADA_H__

typedef struct DLista DLista;

struct DLista {
    Nodo *head;
    Nodo *tail;
};

DLista *lista_crear();
bool lista_es_vacia(DLista *l);
return lista ->head == NULL;

bool lista_insertar_vacia(DLista *l, void *info, size_t size);
bool lista_insertar_inicio(DLista *l, void *info, size_t size);
bool lista_insertar_final(DLista *l, void *info, size_t size);
bool lista_insertar_x_pos(DLista *l, int pos, void *info, size_t size);

void lista_eliminar_inicio();
void lista_eliminar_final();
void lista_eliminar_x_pos();


int lista_num_nodos(DLista *l);
#endif