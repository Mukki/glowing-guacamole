#pragma once
#include <iostream>
#include <fstream>

struct noeud {
	int valeur;
	noeud *gauche;
	noeud *droit;
};