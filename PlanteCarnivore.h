#ifndef PLANTECARNIVORE_H   
#define PLANTECARNIVORE_H

#include <string>
#include <stdbool.h>
#include "Plante.h"

class PlanteCarnivore : public Plante{
  private:
    int _jourDigestion;
    bool _digestion;
  public:
    void inspecter();
    PlanteCarnivore(std::string nom, std::string espece, int valeur, int hydro, int coupe, int maturite, int _jourDigestion);
    int getJourDigestion();
    void setJourDigestion(int jourDigestion);
    void manger();
};


#endif