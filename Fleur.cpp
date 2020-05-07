#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <string>
#include "Plante.h"
#include "Fleur.h"
#include <iostream>

//int _eclosion

    void Fleur::inspecter(){
        std::cout << _name << " est une fleur de l'espece des " << _espece 
        << " et a " << _hydratation << " de soif et " << _coupeSante << " de coupe"
        << " , elle coute " << _valeur << " euros et a " << _eclosion << " d'eclosion"
        << std::endl;
    }

    Fleur::Fleur(std::string nom, std::string espece, int valeur, int hydro, int coupe, int maturite):
         Plante(nom, espece, valeur, hydro, coupe, maturite){}
    
    void Fleur::eclore(){
        if(_maturite == 10){
            std::cout << "Votre " << _name << " a eclot !" << std::endl;
        _valeur = _valeur*4;
        }
    }

    void Fleur::fane(){
        if(_maturite == 15){
            std::cout << "Votre " << _name << " a fanee !" << std::endl;
            _valeur = 2;
        }
    }

#endif