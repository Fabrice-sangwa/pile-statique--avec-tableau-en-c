#define max 10


typedef struct pile{
    char tab[max];
    int sommet;
}Pile;


void initialiserPile(Pile *p);
void empiler(Pile *p, char valeur);
void depiler(Pile *p);
int pilePleine(Pile *p);
int pilevide(Pile *p);
