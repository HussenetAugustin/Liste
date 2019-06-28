#include "list.h"
#include<stdio.h>
#include<stdlib.h>

list *create_list(int v, list *next){
	list *res=malloc(sizeof(list));
	res->value=v;
	res->next=next;
	return res;
}

int longueur(list *l){
	if(l==NULL){
		return 0;
	}
	return 1+longueur(l->next);
}

void afficher(list *l){
	printf("[");
	while(l->next!=NULL){
		printf("%d,",l->value);
		l=l->next;
	}
	printf("%d]\n",l->value);
}

list *renverser(list *l){
	list *res=malloc(sizeof(list));
	res->next=NULL;
	res->value=l->value;
	while(l->next!=NULL){
		l=l->next;
		res=create_list(l->value,res);
	}
	return res;
}

list *concatener(list *l1, list *l2){
	list *res=malloc(sizeof(list));
	list *inte=renverser(l1);
	res->value=inte->value;
	res->next=l2;
	while(inte->next!=NULL){
		inte=inte->next;
		res=create_list(inte->value,res);
	}
	return res;
}

list *liste(int *x,int taille){
	list *res=malloc(sizeof(list));
	res->value=*x;
	res->next=NULL;
	for(int i=1;i<taille;i++){
		x++;
		res=create_list(*x,res);
	}
	return renverser(res);
}

list *demander(){
	printf("Entrez la taille de votre liste:\n");
	char a[4];
	scanf("%s",a);
	int taille=atoi(a);

	char nb[5];
	printf("Entrez un nombre entier");
	scanf("%s",nb);
	int *x=malloc(taille*sizeof(int));
	*x=atoi(nb);

	for(int i=1;i<taille;i++){
		printf("Entrez un nombre entier");
		scanf("%s",nb);
		*(x+i)=atoi(nb);
	}
	return liste(x,taille);
}


