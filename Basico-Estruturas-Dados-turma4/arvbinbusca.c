#include <stdio.h>
#include <stdlib.h>

struct arv {
  int info;
  struct arv* esq;
  struct arv* dir;
};

typedef struct arv Arv;

Arv* busca (Arv* r, int v)
{
  if (r == NULL) return NULL;
  else if (r->info > v) return busca(r->esq,v);
  else if (r->info < v) return busca(r->dir,v);
  else return r;
}


Arv* insere (Arv* a, int v)
{
  if (a==NULL) {
    a = (Arv*)malloc(sizeof(Arv));
    a->info = v;
    a->esq = a->dir = NULL;
  }
  else if (v < a->info)
    a->esq = insere(a->esq,v);
  else /* v < a->info */
    a->dir = insere(a->dir,v);
  return a;
}


Arv* libera (Arv* a){
  if (a!=NULL){
    libera(a->esq); /* libera sae */
    libera(a->dir); /* libera sad */
    free(a); /* libera raiz */
  }
  return NULL;
}


void imprime_in(Arv* r){
  if (r != NULL) {
    imprime_in(r->esq); // Imprime a subárvore esquerda
    printf("%d ", r->info); // Imprime o nó atual
    imprime_in(r->dir); // Imprime a subárvore direita
  }
}



void main(void){
  Arv* a = NULL;
  a = insere(a, 1);
  imprime_in(a);
  printf("\n");
  a = insere(a, 2);
  imprime_in(a);
  printf("\n");
  a = insere(a, 3);
  imprime_in(a);
  printf("\n");
  a = insere(a, 15);
  imprime_in(a);
  printf("\n");
  a = insere(a, 7);
  imprime_in(a);
  printf("\n");

  int lista_busca[] = {2,8};
  for(int i = 0; i < 2; i++){
    if(busca(a, lista_busca[i])){
      printf("\nO número %d está na lista\n", lista_busca[i]);
    }
    else{
      printf("\nO número %d não está na lista\n", lista_busca[i]);
    }
  }

}
