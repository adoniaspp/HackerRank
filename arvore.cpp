#include <iostream>

using namespace std;

//Registro que representa cada elemento da árvore
struct Arvore{
    int data;
    Arvore *esq, *dir;
};

//Cada elemento da árvore binária na pilha
struct Pilha
{
    Arvore *reg;
    Pilha *prox;
};

    //árvore vazia
    Arvore *raiz = NULL;
    //Ponteiros auxiliares
    Arvore *aux;
    Arvore *aux1;
    Arvore *novo;
    Arvore *anterior;
    //Topo da pilha
    Pilha *topo;
    //Auxiliar da pilha
    Pilha *aux_pilha;
    //Variável auxiliar
    bool achou;

    void inserirNoArvore(int data);
    int imprimirArvore(Arvore *raiz);

int main()
{
    inserirNoArvore(20);
    inserirNoArvore(10);
    inserirNoArvore(30);
    inserirNoArvore(2);
    inserirNoArvore(40);
    cout << imprimirArvore(raiz) << '\n';
}

void inserirNoArvore(int data)
{
    //Cria o novo nó com o data 
    novo = new Arvore();
    novo->data = data;
    novo->dir = NULL;
    novo->esq = NULL;
    //Árvore vazia
    if(raiz == NULL){
        raiz = novo;
    }else{
        //Atribui a raiz ao auxiliar.
        aux = raiz;
        achou = false;
        while (!achou)
        {
            //Verifica se o novo dado é menor que a raiz, se for vai para o lado esquerdo.
            if(novo->data < aux->data)
            {   
                //Verifica se o lado esquerdo está vazio, se estiver insere.
                if(aux->esq == NULL)
                {
                    aux->esq = novo;
                    achou = true;
                }
                //Se o lado esquerdo estiver preenchido pega ele para nova verificação.
                else aux = aux->esq;  
            }
            //Se for maior que a raiz vai para o lado direito.
            else if(novo->data >= aux->data)
            {
                //Verifica se o lado direito está vazio, se estiver insere.
                if(aux->dir == NULL)
                {
                    aux->dir = novo;
                    achou = true;
                }
                //Se o lado direito estiver preenchido pega ele para nova verificação.
                else aux = aux->dir;
            }
        }
    }
}   

int imprimirArvore(Arvore *raiz){

    if(raiz == NULL)
    {
        cout << "Árvore vazia \n";
    }
    else if(raiz->dir != NULL)
    {
        cout << imprimirArvore(raiz->dir) << '\n'; 
        return raiz->data;
    }
    else
    {
        return raiz->data;
    }
}


