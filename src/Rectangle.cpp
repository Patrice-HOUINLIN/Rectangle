#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(double largeur, double hauteur) : largeur(0), hauteur(0) {
    if(largeur <= 0 || hauteur <= 0){
        std::cerr << "Erreur : Dimensions invalides!!! Initialisation a 0." << std::endl;
    }
    else{
        this->largeur = largeur;
        this->hauteur = hauteur;
    }    
}
double Rectangle::aire() const {
    return largeur * hauteur;
}
double Rectangle::perimetre() const {
    return (largeur + hauteur) * 2;
}
bool Rectangle::estCarre() const {
    return largeur == hauteur;
}
void Rectangle::afficher() const {
    std::cout << "Largeur : " << largeur << ", Hauteur : " << hauteur << std::endl;
    std::cout << "Aire : " << aire() << ", Perimetre : " << perimetre() << std::endl;
    if(estCarre()){
        std::cout << "C'est un carre." << std::endl;
    }
    else{
        std::cout << "Ce n'est pas un carre." << std::endl;
    }
}
void Rectangle::redimensionner(double nouvelleLargeur, double nouvelleHauteur) {
    if(nouvelleLargeur <= 0 || nouvelleHauteur <= 0){
        std::cerr << "Erreur : Redimensionnement impossible!!! Dimensions invalides." << std::endl;
    }
    else{
        largeur = nouvelleLargeur;
        hauteur = nouvelleHauteur;
    }
}