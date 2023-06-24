#include <stdio.h>
#include <stdlib.h>

struct arvgen {
  int info;
  struct arvgen *prim;
  struct arvgen *prox;
};
typedef struct arvgen ArvGen;


ArvGen* cria (int info)
{
  ArvGen *a =(ArvGen *)malloc(sizeof(ArvGen));
  a->info = info;
  a->prim = NULL;
  a->prox = NULL;
  return a;
}

void insere (ArvGen* a, ArvGen* f)
{
  f->prox = a->prim;
  a->prim = f;
}



void libera (ArvGen* a)
{
  ArvGen* p = a->prim;
  while (p!=NULL) {
    ArvGen* t = p->prox;
    libera(p);
    p = t;
  }
  free(a);
}

void imprime (ArvGen* a)
{
  ArvGen* p;
  printf("%d\n",a->info);
  for (p=a->prim; p!=NULL; p=p->prox)
    imprime(p);
}

int busca (ArvGen* a, char c)
{
  ArvGen* p;
  if (a->info==c)
    return 1;
  else {
    for (p=a->prim; p!=NULL; p=p->prox) {
      if (busca(p,c))
        return 1;
    }
  }
  return 0;
}

int main()
{
	ArvGen* a = cria(43);
  ArvGen* b = cria(22);
  ArvGen* c = cria(66);
  ArvGen* d = cria(31);
  ArvGen* e = cria(21);
  ArvGen* f = cria(58);
  ArvGen* g = cria(71);
  ArvGen* h = cria(59);
  ArvGen* i = cria(12);
  ArvGen* j = cria(45);
  ArvGen* k = cria(35);
  insere(b, d);
  insere(b, c);
  insere(j, k);
  insere(f, i);
  insere(f, h);
  insere(f, g);
  insere(a, j);
  insere(a, f);
  insere(a, e);
  insere(a, b);
  imprime(a);
  
  int lista_busca[] = {12, 88, 77, 66};
  for(int i = 0; i < 4; i++){
    if(busca(a, lista_busca[i])){
      printf("\nO número %d está na lista\n", lista_busca[i]);
    }
    else{
      printf("\nO número %d não está na lista\n", lista_busca[i]);
    }
  }

}
