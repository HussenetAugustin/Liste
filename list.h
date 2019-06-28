#ifndef LIST // importer une seule fois le fichier
#define LIST

typedef struct List{
	int value;
	struct List *next;
}list;

list *create_list(int v, list *next);

int longueur(list *l);

void afficher(list *l);

list *renverser(list *l);

list *concatener(list *l1, list *l2);

list *liste(int *x,int taille);

list *demander();

#endif
