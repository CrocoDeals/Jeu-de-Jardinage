#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <vector>
#include "Plante.h"

class Botaniste{
  protected:
    std::string _name;
    int _argent;
    int _engrais;
    std::vector<Plante*> _jardin;
    std::vector<Plante*> _magasin;
    std::vector<Plante*> _bin;
  public:
    void afficheJardin();
    void afficheMagasin();
    Botaniste(std::string nom, int argent, int engrais, std::vector<Plante*> jardin, std::vector<Plante*> magasin);
    void acheterPlante(int indexPlante);
    void vendrePlante(int indexPlante);
    void acheterEngrais();
    int getEngrais();
    void setEngrais(int engrais);
    void dormir(bool nextDay);
};


#endif