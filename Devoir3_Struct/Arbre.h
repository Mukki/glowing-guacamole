#include "struct.h"
#include <stdlib.h>


class ABR {

private:

	noeud *racine; // La racine de l�arbre ABR

public:
	ABR();// Construit l�arbre en fonction d'un fichier texte 

	~ABR(); // D�salloue l�espace m�moire occup� par l�arbre.

	void Inserer(int d); // ins�rer l��l�ment de valeur d dans l�arbre.

	void Supprimer(int d); // Supprime l��l�ment valeur d de l�arbre.

	void Afficher_Arbre(); //Affiche les �l�ments de l�arbre niveau par niveau.

	int Afficher_hauteur(); //Affiche la hauteur de l�arbre.

	void Afficher_Ascendant(int d); // Affiche les ascendants du noeud de valeur d (bonus 10pts)

	void Affiche_Descendant(int d);// Affiche les descendants du noeud de valeur d.
}; // fin de la d�claration de la classe ABR