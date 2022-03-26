#include <stdio.h>
#include <stdlib.h>

#include "pile.h"

void initialiserPile(Pile *p){

    p->sommet = 0;

}

void empiler(Pile *p, char valeur){

    if (p->sommet!=max){
        p->tab[p->sommet] = valeur;
        printf("\n%c a ete empile avec succees", valeur);
        p->sommet++;
    }else{

        printf("\nPile pleine, impossible d'empiler");
    }
}

void depiler(Pile *p){

    if (p->sommet != 0){
        p->sommet--;
        printf("\n%c est l'element depile", p->tab [p->sommet]);
    }else{

        printf("\nla pile est vide");
    }


}
int pilePleine(Pile *p){

    return p->sommet == max;

}

int pilevide(Pile *p){

    return p->sommet == 0;

}
