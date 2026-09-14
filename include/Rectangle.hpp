// Rectangle.hpp
#pragma once

// Classe représentant un rectangle
class Rectangle {
private:
    double largeur;
    double hauteur;
    
public:
    Rectangle(double largeur, double hauteur);
    double aire() const;
    double perimetre() const;
    bool estCarre() const; 
    void afficher() const;
    void redimensionner(double nouvelleLargeur, double nouvelleHauteur);
};