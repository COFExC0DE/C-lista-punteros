struct nodo{

    int informacion;//Donde se guarda la información
    struct nodo* siguiente;
};

struct nodo* crear(int dato);
struct nodo* agregarEnLista(struct nodo* cabeza_lista, int elemento);
void mostrar_lista(struct nodo * cabeza_lista);
