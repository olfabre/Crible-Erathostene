#include "utilities.h"
#include <math.h>

/**
 * Crible d'Erathostene
 * @param T un tableau de booléens de taille n+1
 * @param n 
 *
 * @return T[i] = true ssi i est premier
 */
void erathostenes(int n, bool * T)
{

	/* Nombre premier: un nombre dont ses seuls diviseurs sont 1 et lui-même. */
	
	/* Algorythme:
		Chaque indice du tableau correspond à un nombre.
		On passe toutes les valeurs du tableau booléen à VRAI sauf pour les indices 0 et 1.
		
		On passe à false les valeurs du tableau à FAUX dont l'indice est le résulat d'un produit avec les nombres de 2 à Racine carrée de n.
		Par conséquent, tous ces nombres ne seront plus premiers car ils ont été multipliés.
	
	
	*/


	// On affecte toutes les valeurs booléennes du tableau à Vrai (1) sauf pour l'indice 0 et 1
	for (int i=0; i < n; i++){
		(i == 0 || i == 1) ? T[i] = false : T[i] = true;
	}

	// On affecte toutes les valeurs booléennes à FAUX (0) aux indices du tableau est le résultat du produit
	for (int i=2; i <= sqrt(n); i++){ // Pas besoin de chercher pour tous les nombres.

		for (int j=i; j <= (n/i); j++){ // car j*i <= n sinon on sort des indices allouées du tableau
			T[i*j]=false;

		}
	}


} // Fin de la fonction

