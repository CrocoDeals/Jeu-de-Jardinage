#include <iostream>
#include <vector>

#include "Plante.cpp"
#include "Botaniste.cpp"
#include "Fleur.cpp"
#include "PlanteCarnivore.cpp"

using namespace std;

int main()
{
    





    //maturite,nom,espece,hydro,coupe,valeur,eclosion
    Fleur * lilas = new Fleur("Lilas", "Fleurs Grappes", 30, 7, 7, 2);
    Fleur * paquerette = new Fleur("Paquerette", "Petites Fleurs", 10, 7, 7, 1);
    lilas->inspecter();
    
    //nom,argent,std::vector<Plante*> jardin,std::vector<Plante*> magasin
    Botaniste * gerard = new Botaniste("Gerard", 100, 2, vector<Plante*>(1, lilas), vector<Plante*>(1, paquerette));
    gerard->afficheJardin();
    gerard->afficheMagasin();

    for(int i = 0; i < _jardin[i]->getSize(); i++){
        //parcours de toutes les plantes
        //Maturite++ Hydratation-- coupeSante-- dayDigestion++
        //Eclosion / Fane
    }
}
