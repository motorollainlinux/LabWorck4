
#include <iostream>

int WhatIsTriangle(int &FormOfTriangle, int &SideA, int &SideB, int &SideC) {
    std::cout << "введите сторону 1\n";
    std::cin >> SideA;
    std::cout << "введите сторону 2\n";
    std::cin >> SideB;
    std::cout << "введите сторону 3\n";
    std::cin >> SideC;
    if (SideA > SideB + SideC || SideB > SideA + SideC || SideC > SideA + SideB)
    return FormOfTriangle = -1;
    else if (SideA == SideB && SideB != SideC ||
    SideB == SideC && SideB != SideA ||
    SideA == SideC && SideA != SideB)
    return FormOfTriangle = 1;
    else if (SideA == SideB && SideB == SideC)
    return FormOfTriangle = 2;   
    else if (SideC * SideC == SideA * SideA + SideB * SideB ||
    SideB * SideB == SideA * SideA + SideC * SideC ||
    SideA * SideA == SideB * SideB + SideC * SideC)
    return FormOfTriangle = 3;
    else 
    return FormOfTriangle = 4;
}
int main() {
    int FormOfTriangle, SideA, SideB, SideC;
    WhatIsTriangle(FormOfTriangle, SideA, SideB, SideC);
    if (FormOfTriangle == 1)
    std::cout << "треугольник со стронами ("<< SideA << ", " << SideB << ", " << SideC <<") является равнобедренным.\n";
    else if (FormOfTriangle == 2)
    std::cout << "треугольник со стронами ("<< SideA << ", " << SideB << ", " << SideC <<") является равносторнонним.\n";
    else if (FormOfTriangle == 3)
    std::cout << "треугольник со стронами ("<< SideA << ", " << SideB << ", " << SideC <<") является прямоугольным.\n";
    else if (FormOfTriangle == 4)
    std::cout << "треугольник со стронами ("<< SideA << ", " << SideB << ", " << SideC <<") является разносторонним.\n";
    else
    std::cout << "треугольник со стронами ("<< SideA << ", " << SideB << ", " << SideC <<") не существует!\n";
    return 0;
}
