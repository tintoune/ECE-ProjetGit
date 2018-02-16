#include <iostream>
#include <vector>
#include <string>
#include "Cartes.h"
#include "Creatures.h"
#include "Energies.h"
#include "Creatures.h"
#include "Speciales.h"
#include <stdlib.h>
#include "Initialisation.hpp"
#include "Menu.hpp"



int main()
{
    std::vector<Cartes*>bibli;
    
    bibli=init ();
    
    int nbLignestot=0;
    nbLignestot=nblignesfichier()/2;
    
//    for (unsigned int i=0; i<nbLignestot ; i++)     //affiche toutes les cartes initialisé à partir du fichier
//    {
//        bibli[i]->afficher_info();
//    }
    
    menu();
    
    
    
    
    
    return 0;
}
