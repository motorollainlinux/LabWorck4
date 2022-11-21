
#include <iostream>
#include <fstream>
#include <math.h>
 
void function(int &SOfPolygon) {
    long int P, S; int a, b, c;
    std::ifstream fin;
    fin.open("sides.txt");
    fin >> a >> b >> c;
    for (int i = 1; i <= 6; i++) {
        if (i == 6) {
            fin.close();
            fin.open("sides.txt");
            fin >> a;
            fin.close();
        }
        std::cout << a << "\n" << b << "\n" << c << "\n";
        P = (a + b + c) / 2; // полупериметр
        S = sqrt(P * (P - a) * (P - b) * (P - c)); // формула герона
        SOfPolygon += S;
        a = c;
        fin >> b >> c;
    }
}
int main() {
    int SOfPolygon = 0;
    function(SOfPolygon);
    std::cout << SOfPolygon;
    return 0;
}
