#include "Arbre.h"

void main() {

	
	int entre;
	int valInserer, valSuprimer, valAscendant, valDescendant;


	std::cout << "1 : Inserer l element de valeur d dans l arbre binaire de recherche." << std::endl;
	std::cout << "2 : Supprimer l element de valeur d de l arbre binaire de recherche." << std::endl;
	std::cout << "3 : Afficher les elements de l’arbre binaire de recherche niveau par niveau." << std::endl;
	std::cout << "4 : Afficher la hauteur de l arbre binaire de recherche." << std::endl;
	std::cout << "5 : Afficher les ascendants de l element de valeur d." << std::endl;
	std::cout << "6 : Afficher les descendants de l element de valeur d." << std::endl;

	std::cin >> entre;

	std::ifstream fichierMenu("entiers.txt", std::ios::in);
	if (!fichierMenu.fail())
	{
		std::cout << "marche po esty";
	}
	fichierMenu.close();

	ABR fct;

	switch (entre) {

	case 1: std::cout << endl << "Ecrivez la valeur a inserer:"; std::cin >> valInserer;	fct.Inserer(valInserer); break;
	case 2: std::cout << endl << "Quelle valeur de l'arbre voulez-vous supprimer?:"; std::cin >> valSuprimer; fct.Supprimer(valSuprimer); break;
	case 3: std::cout << endl << "Arbre binaire:"; fct.Afficher_Arbre(); break;
	case 4: std::cout << endl << "Hauteur de larbre binaire:"; fct.Afficher_hauteur(); break;
	case 5: std::cout << endl << "Valeur d: "; cin >> valAscendant; fct.Afficher_Ascendant(valAscendant); break;
	case 6: std::cout << endl << "Valeur d: "; cin >> valDescendant; fct.Affiche_Descendant(valDescendant); break;
	default:  std::cout << "Error" << endl; main(); break;
	}
}  