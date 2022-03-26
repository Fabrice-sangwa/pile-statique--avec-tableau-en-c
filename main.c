#include <stdio.h>
#include <stdlib.h>

#include "pile.c"


int main (){

    Pile pile;
    initialiserPile(&pile);
    empiler(&pile, 'A');
    empiler(&pile, 'B');
    depiler(&pile);
    empiler(&pile, 'C');
    depiler(&pile);
    empiler(&pile, 'D');
    empiler(&pile, 'E');
    depiler(&pile);
    empiler(&pile, 'F');
    empiler(&pile, 'G');
    empiler(&pile, 'H');
    depiler(&pile);
    empiler(&pile, 'I');
    pilePleine(&pile);
    empiler(&pile, 'J');
    depiler(&pile);
    empiler(&pile, 'K');
    empiler(&pile, 'J');
    pilePleine(&pile);




}


