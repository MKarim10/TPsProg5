#ifndef __PILE__
#define __PILE__


struct noeud{
	int donnee;
	struct noeud *prochain;
};

typedef struct noeud *pile;

pile pile_vide();
pile empiler(int donnee, pile p);
void detruire_pile(pile p);
int sommet(pile p);
pile depiler(pile p);
int est_pile_vide(pile p);

#endif