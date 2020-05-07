#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include <string>
#include <vector>
#include <stdbool.h>
#include <iostream>
#include "Botaniste.h"

//std::string _name, int _argent, std::vector<Plante*> _jardin, 
//std::vector<Plante*> _magasin, std::vector<Plante*> _bin

    void Botaniste::afficheJardin(){
        std::cout << _name << " possede " << _argent << " euros, ";
        _jardin[0]->inspecter();
    }
    void Botaniste::afficheMagasin(){
        _magasin[0]->inspecter();
    }
    Botaniste::Botaniste(std::string nom, int argent, int engrais, std::vector<Plante*> jardin, std::vector<Plante*> magasin):
        _name(nom), _argent(argent), _jardin(jardin), _magasin(magasin){}
    
    void Botaniste::acheterPlante(int indexPlante){
        if(_argent <= 0){
            _argent = 0;
            std::cout << "Vous n'avez plus d'argent !" << std::endl;
        } else {
            std::cout << "Vous achetez de l'engrais !" << std::endl;
            _argent = _argent - _jardin[indexPlante]->getValeur();
            _magasin.push_back(_jardin[indexPlante]); 
        }
    }

    void Botaniste::vendrePlante(int indexPlante){
        std::cout << "Vous vendez votre plante" << std::endl;
        _argent = _argent + _jardin[indexPlante]->getValeur();
        _jardin.push_back(_magasin[indexPlante]);
    }

    void Botaniste::acheterEngrais(){
        _argent = _argent - 3;
        if(_argent <= 0){
            _argent = 0;
            std::cout << "Vous n'avez plus d'argent !" << std::endl;
        } else {
            std::cout << "Vous achetez de l'engrais !" << std::endl;
            _argent = _argent - 3;
            _engrais++;
        }
    }

    int Botaniste::getEngrais(){
        return _engrais;
    }

    void Botaniste::setEngrais(int engrais){
        _engrais = engrais;
    }

    void Botaniste::dormir(bool nextDay){
        nextDay = false;
    }

#endif