#include <iostream>
#include <stack>
#include <map>
using namespace std;

typedef struct no {
    int dado;
    struct no *esq, *dir;
} no;

no* criar_no(int valor) {
    no *novo = new no;
    novo->dado = valor;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

void pre_ordem(no *raiz) {
    if (raiz == NULL) return;

    stack<no*> pilha;
    pilha.push(raiz);

    while (!pilha.empty()) {
        no *atual = pilha.top();
        pilha.pop();

        cout << atual->dado << " ";

        if (atual->dir != NULL) pilha.push(atual->dir);
        if (atual->esq != NULL) pilha.push(atual->esq);
    }
}

int main() {
    no *raiz = NULL;
    map<int, no*> nos;   // acha um nó pelo valor

    int r;
    if (cin >> r) {
        raiz = criar_no(r);
        nos[r] = raiz;

        int x, y;
        char lado;
        while (cin >> x >> lado >> y) {
            no *novo = criar_no(x);
            nos[x] = novo;
            if (lado == 'E') nos[y]->esq = novo;
            else             nos[y]->dir = novo;
        }
    }

    cout << "Pre-ordem: ";
    pre_ordem(raiz);
    cout << endl;

    return 0;
}
