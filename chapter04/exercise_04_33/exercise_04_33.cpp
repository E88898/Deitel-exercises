#include <iostream>
#include <unistd.h>

int
main()
{
    int aSide, bSide, cSide;
    if (::isatty(STDIN_FILENO)) {
        std::cout << "Enter three sides of triangle: ";
    }
    std::cin >> aSide >> bSide >> cSide;
    
    if (aSide <= 0) {
        std::cerr << "Error 1: the side of triangle can't be 0 or negative." << std::endl;
        return 1;
    }
    
    if (bSide <= 0) {
        std::cerr << "Error 1: the side of triangle can't be 0 or negative." << std::endl;
        return 1;
    }
    
    if (cSide <= 0) {
        std::cerr << "Error 1: the side of triangle can't be 0 or negative." << std::endl;
        return 1;
    }
    
    if (aSide >= bSide + cSide) {
         std::cout << "They can't represent the sides of a triangle." << std::endl;
         return 0;
    }
    
    if (bSide >= aSide + cSide) {
         std::cout << "They can't represent the sides of a triangle." << std::endl;
         return 0;
    }
    
     if (cSide >= aSide + bSide) {
         std::cout << "They can't represent the sides of a triangle." << std::endl;
         return 0;
    }
    int squaredSideA = aSide * aSide;
    int squaredSideB = bSide * bSide;
    int squaredSideC = cSide * cSide;
    if (squaredSideA == squaredSideB + squaredSideC) {
        std::cout << "They could be the sides of a right triangle." << std::endl;
        return 0;
    }
    
    if (squaredSideB == squaredSideA + squaredSideC) {
        std::cout << "They could be the sides of a right triangle." << std::endl;
        return 0;
    }
    
    if (squaredSideC == squaredSideB + squaredSideA) {
        std::cout << "They could be the sides of a right triangle." << std::endl;
        return 0;
    }
    
    std::cout << "They couldn't be the sides of a right triangle." << std::endl; 
     
    return 0;
}

