#ifndef PLANTECARNIVORE_CPP
#define PLANTECARNIVORE_CPP

#include <string>
#include "Plante.h"
#include "PlanteCarnivore.h"
#include <iostream>
#include <stdbool.h>

//bool _digestion

    void PlanteCarnivore::inspecter(){
        std::cout << _name << " est une fleur de l'espece des " << _espece 
        << " et a " << _hydratation << " de soif et " << _coupeSante << " de coupe"
        << " , elle coute " << _valeur << " euros et n'a pas encore mangé"
        << std::endl;
    }

    PlanteCarnivore::PlanteCarnivore(std::string nom, std::string espece, int valeur, int hydro, int coupe, int maturite, int jourDigestion):
        Plante(nom, espece, valeur, hydro, coupe, maturite), _jourDigestion(jourDigestion){}
    
    void PlanteCarnivore::manger(){
        if(_digestion == false){
            std::cout << "Votre " << _name << " avale une mouche !" << std::endl;
            _digestion = true;
        } else {
            std::cout << "Votre " << _name << " est en digestion !" << std::endl;
            
        }
    }

    int PlanteCarnivore::getJourDigestion(){
        return _jourDigestion;
    }

    void PlanteCarnivore::setJourDigestion(int jourDigestion){
        _jourDigestion = jourDigestion;
    }

#endif