#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "Plante.h"

class Fleur : public Plante{
  private:
    int _eclosion;
  public:
    void inspecter();
    Fleur(std::string nom, std::string espece, int valeur, int hydro, int coupe, int maturite);
    void eclore();
    void fane();
};

#endif