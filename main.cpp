
#include <iostream>
#include "utilities.h"

using namespace std;

int main() {
    // Déclaration & initialisation
    int n(0); // l'ensemble des nombre de 0 à n 
    
    // Valeur de n 
    cout << "Valeur de n? ";
    cin >> n;
    n = n + 1; //(indice) à n+1
    cout << endl;
    
    // Initialisation du tableau de type int
    bool T[n]; // Tableau de valeur boolèenne (indice) à n+1

    // Appel de la fonction erathostenes
    erathostenes(n, T);
   
   // Affichage du tableau T pour vérification
   for (int i=0; i <= n - 1; i++){
    cout << "T[" << i << "] = " << T[i] << endl;
    }


}

