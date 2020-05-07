#ifndef PLANTE_CPP  
#define PLANTE_CPP

#include <string>
#include "Plante.h"
#include <iostream>
#include <vector>
//int _maturite;std::string _name;std::string _espece;int _hydratation;int _coupeSante;

    void Plante::inspecter(){
        std::cout << "Ceci est une Plante sans type !!!" << std::endl;
    }
    void Plante::applyEngrais(int currentDay){
        int temp = 0;
        if(temp == currentDay){
            std::cout << "Vous placez de l'engrais, votre plante apprécie" << std::endl;
            _maturite++;
            temp++;
        } else {
            std::cout << "Vous avez déjà placer votre engrais aujourd'hui, action impossible" << std::endl;
        }
    }
    void Plante::taillage(){
        if(_coupeSante >= 11 || _coupeSante <= 0){
            std::cout << "Il ne reste plus rien de votre plante" << std::endl;
        } else if (_coupeSante == 10){
            std::cout << "Attention de ne pas trop coupe votre plante, vous atteignez un point critique" << std::endl;
            _coupeSante++;
        } else if (_coupeSante = 1) {
            std::cout << "Votre plante pousse n'importe comment, vous coupez mais la situation est presque critique" << std::endl;
            _coupeSante++;
        } 
    }
    void Plante::arrosage(){
        if(_hydratation >= 11 || _hydratation <= 0){
            std::cout << "Il ne reste plus rien de votre plante" << std::endl;
        } else if (_hydratation == 10){ 
            std::cout << "Attention de ne pas trop arroser votre plante, vous atteignez un point critique" << std::endl;
            _hydratation++;
        } else if (_hydratation == 1) {
            std::cout << "Votre plante est sèche, vous arrosez mais la situation est presque critique" << std::endl;
            _hydratation++;
        } 
    }
    
    Plante::Plante(std::string nom, std::string espece, int valeur, int hydro, int coupe, int maturite):
        _name(nom), _espece(espece), _valeur(valeur), _hydratation(hydro), _coupeSante(coupe),_maturite(maturite){}

    int Plante::getValeur(){
        return _valeur;
    }
    int Plante::getHydration(){
        return _hydratation;
    }
    int Plante::getCoupeSante(){
        return _coupeSante;
    }
    int Plante::getMaturite(){
        return _maturite;
    }

    void Plante::setValeur(int valeur){
        _valeur = valeur;
    }
    void Plante::setHydration(int hydro){
        _hydratation = hydro;
    }
    void Plante::setCoupeSante(int coupe){
        _coupeSante = coupe;
    }
    void Plante::setMaturite(int maturite){
        _maturite = maturite;
    }
    
#endif