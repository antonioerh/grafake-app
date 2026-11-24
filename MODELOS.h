#define MAX_NOME 30
#define MAX_PESSOAS 100

typedef struct No {
    int indice;            
    struct No *prox;      
} No;

typedef struct {
    char nome[MAX_NOME];
    int  recebeu;          
    int  dia;              
    int  pai;              
    int  bloqueado;        
    No  *vizinhos;         
} Pessoa;


typedef struct {
    Pessoa pessoas[MAX_PESSOAS];
    int    total;
} Rede;

typedef struct {
    int itens[MAX_PESSOAS];
    int inicio;
    int fim;
} Fila;