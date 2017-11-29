#include "Arbre.h"

ABR::ABR()
{
	
	
	/*
	//création de l'arbre
	noeud *arbreEntier = racine;

	//est-ce que l'arbre est vide ? si oui, le noeud est la racine
	arbreEntier = new noeud;
	*/
}
	
	/*// Insertion
void ArbreABR::Inserer(int dat)
{
   Noeud *pere = NULL;
   actuel = racine;
   // Chercher la donnee, en metant un pointeur au pere
   while(!Vide(actuel) && dat != actuel->donnee) 
   {
      pere = actuel;
           if (dat > actuel->donnee) actuel = actuel->droite;
      else if (dat < actuel->donnee) actuel = actuel->gauche;
   }

   // Si la donnee existe, returner sans l'inserer
   if(!Vide(actuel)) return;
   // Si pere == NULL l'arbre est vide, le noeud sera la racine
   if(Vide(pere)) racine = new Noeud(dat);
   // Si donnee < noeud pere, insertion a gauche
   else if(dat < pere->donnee) pere->gauche = new Noeud(dat);
   // Si donnee < noeud pere, insertion a droite
   else if(dat > pere->donnee) pere->droite = new Noeud(dat);
}   
class ArbreABR
{
private:
class Noeud
{
public:
// Constructor:
Noeud(int dat, Noeud *gau=NULL, Noeud *dro=NULL) :
donnee(dat), gauche(gau), droite(dro) {}
// Membres:
int    donnee;
Noeud *gauche;
Noeud *droite;
};
// Pointeurs de l'arbre racine et noeud actuel:
Noeud *racine;
Noeud *actuel;
int compteur;
int hauteur;
		*/



//C'est une fonction récursive, donc on rappelle la fonction pour supprimer chaque élément 
ABR::~ABR()			//noeud * racine
{
}

void ABR::Inserer(int d)
{

}

void ABR::Supprimer(int d)
{
}

void ABR::Afficher_Arbre()
{
}

int ABR::Afficher_hauteur()
{
	return 0;
}

void ABR::Afficher_Ascendant(int d)
{
}

void ABR::Affiche_Descendant(int d)
{
}
