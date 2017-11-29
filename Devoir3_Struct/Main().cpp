#include "Arbre.h"

void main() {

	
	char entre;
	int valInserer, valSuprimer, valAscendant, valDescendant;


	std::cout << "1 : Inserer l element de valeur d dans l arbre binaire de recherche." << std::endl;
	std::cout << "2 : Supprimer l element de valeur d de l arbre binaire de recherche." << std::endl;
	std::cout << "3 : Afficher les elements de l’arbre binaire de recherche niveau par niveau." << std::endl;
	std::cout << "4 : Afficher la hauteur de l arbre binaire de recherche." << std::endl;
	std::cout << "5 : Afficher les ascendants de l element de valeur d." << std::endl;
	std::cout << "6 : Afficher les descendants de l element de valeur d." << std::endl;

	std::ifstream fichierMenu("entiers.txt", std::ios::in);
	if (!fichierMenu.fail())
	{
		std::cout << "un meilleur language svp";
	}
	fichierMenu.close();

	ABR fct;
	while (1) {
		std::cin >> entre;
		switch (entre) {

		case '1': std::cout << std::endl << "Ecrivez la valeur a inserer:"; std::cin >> valInserer;	fct.Inserer(valInserer); break;
		case '2': std::cout << std::endl << "Quelle valeur de l'arbre voulez-vous supprimer?:"; std::cin >> valSuprimer; fct.Supprimer(valSuprimer); break;
		case '3': std::cout << std::endl << "Arbre binaire:"; fct.Afficher_Arbre(); break;
		case '4': std::cout << std::endl << "Hauteur de larbre binaire:"; fct.Afficher_hauteur(); break;
		case '5': std::cout << std::endl << "Valeur d: "; std::cin >> valAscendant; fct.Afficher_Ascendant(valAscendant); break;
		case '6': std::cout << std::endl << "Valeur d: "; std::cin >> valDescendant; fct.Affiche_Descendant(valDescendant); break;
		default:  std::cout << "Error" << std::endl; break;
		}
	}
}  