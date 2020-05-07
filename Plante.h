#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
  protected:
    int _maturite;
    std::string _name;
    std::string _espece;
    int _hydratation;
    int _coupeSante;
    int _valeur;
  public:
    void virtual inspecter();
    Plante(std::string nom, std::string espece, int valeur, int hydro, int coupe, int maturite);
    int getValeur();
    int getHydration();
    int getCoupeSante();
    int getMaturite();
    void setValeur(int valeur);
    void setHydration(int hydro);
    void setCoupeSante(int coupe);
    void setMaturite(int maturite);
    void applyEngrais(int currentDay);
    void taillage();
    void arrosage();
};


#endif