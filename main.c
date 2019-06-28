#include "list.h" // Copie de list.h
#include<stdio.h>
#include<stdlib.h>

void main(int argc, char ** argv){
	list *l=create_list(7,NULL);
	l=create_list(5,l);
	l=create_list(3,l);

	int n=longueur(l);
	printf("%d\n",n);

	afficher(l);

	list *r=renverser(l);
	afficher(r);

	list *l2=create_list(12,NULL);
	l2=create_list(15,l2);
	l2=create_list(18,l2);
	l2=create_list(21,l2);

	afficher(l2);
	list *c=concatener(l,l2);
	afficher(c);
	
	int taille=5;
	int nombres[]={1,2,3,4,5};
	list *p=liste(nombres,taille);
	afficher(p);

	printf("Entrez une liste:\n");
	list *liste1=malloc(sizeof(list));
	liste1=demander();
	afficher(liste1);

	printf("Voici votre liste renversée");afficher(renverser(liste1));
	
	printf("Entrez une liste:\n");
        list *liste2=malloc(sizeof(list));
        liste2=demander();
        afficher(liste2);

	printf("Voici votre liste renversée");afficher(renverser(liste2));
	
	printf("Voici la concaténation de vos deux listes");
	afficher(concatener(liste1,liste2));
}
