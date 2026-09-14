// Rectangle.hpp
#include <iostream>
#include "Rectangle.hpp"

// Constructeur de la classe Rectangles
int main(){
    Rectangle rect1(5, 10);
    Rectangle rect2(11, 7);
    rect1.afficher();
    rect2.afficher();
    rect1.redimensionner(8, 8);
    rect1.afficher();
    Rectangle rect3(-4, 5);
    rect3.afficher();

    return 0;
}