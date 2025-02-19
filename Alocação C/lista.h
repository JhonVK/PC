

// definição da estrutura da lista encadeada simples
typedef struct Nodo {
    int info;
    struct Nodo *prox;
} Nodo;

// protótipos das funções
Nodo *criar();
void destruir(Nodo *inicio);
void inserir(Nodo *inicio, int valor);
void inserirfinal(Nodo *inicio, int valor);
void removerprimeiro(Nodo *inicio);
void removerduplicado(Nodo *inicio);
void remover(Nodo *inicio, int valor);
Nodo *buscar(Nodo *inicio, int valor);
void imprimir(Nodo *inicio);
