#include <stdio.h>
#include <stdlib.h>

struct arv {
  int info;
  struct arv* esq;
  struct arv* dir;
};

typedef struct arv Arv;

Arv* inicializa(void)
{
  return NULL;
}

Arv* cria(int c, Arv* sae, Arv* sad)
{
  Arv* p=(Arv*)malloc(sizeof(Arv));
  p->info = c;
  p->esq = sae;
  p->dir = sad;
  return p;
}

int vazia(Arv* a)
{
  return a==NULL;
}

Arv* libera (Arv* a){
  if (!vazia(a)){
    libera(a->esq); /* libera sae */
    libera(a->dir); /* libera sad */
    free(a); /* libera raiz */
  }
  return NULL;
}

void imprime_pre (Arv* a){
  if (!vazia(a)){
    printf("%d ", a->info); /* mostra raiz */
    imprime_pre(a->esq); /* mostra sae */
    imprime_pre(a->dir); /* mostra sad */
  }

}

void imprime_in (Arv* a){
  if (!vazia(a)){
    imprime_in(a->esq); /* mostra sae */
    printf("%d ", a->info); /* mostra raiz */
    imprime_in(a->dir); /* mostra sad */
  }

}

void imprime_pos (Arv* a){ 
  if (!vazia(a)){
    imprime_pos(a->esq); /* mostra sae */
    imprime_pos(a->dir); /* mostra sad */
    printf("%d ", a->info); /* mostra raiz */
  }

}

int main(){

  Arv* g = cria(67, inicializa(), inicializa());
  Arv* f = cria(34,inicializa(), g);
  Arv* e = cria(12,inicializa(), inicializa());
  Arv* d = cria(5, e,f);
  Arv* k = cria(40,inicializa(),inicializa());
  Arv* l = cria(80, inicializa(), k);
  Arv* a = cria(45, d, l);
  printf("IMPRESSAO PRE FIXADA:");
  imprime_pre(a);
  printf("\n");
  printf("IMPRESSAO IN FIXADA:");
  imprime_in(a);
  printf("\n");
  printf("IMPRESSAO POS FIXADA:");
  imprime_pos(a);
  printf("\n");
	
}
