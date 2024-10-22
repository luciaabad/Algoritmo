#include <iostream>

int main() {
    float P1, P2, P3;
    std::cout << "Introduce el valor de P1";
    std::cin >> P1;
    std::cout << "Introduce el valor de P2";
    std::cin >> P2;
    std::cout << "Introduce el valor de P3";
    std::cin >> P3;

    if (P1 > P2) {
        if (P2 > P3) {
            std::cout << "la respuesta es P3." << std::endl;
        } else {
            if (P2 == P3) {
                std::cout << "la respuesta es P2, P3." << std::endl;
            } else {
                std::cout << "La respuesta es P2." << std::endl;
            }
        }
    } else {
            if (P1 == P2) {
                if (P1, P2 == P3) {
                    std::cout << "la respuesta es P1,P2,P3." << std::endl;
                } else {
                    std::cout << "La respuesta es P1,P2." << std::endl;
                }
            } else {
                if (P1 > P3) {
                    std::cout << "la respuesta es P3." << std::endl;
                } else {
                    if (P1 == P3) {
                        std::cout << "la respuesta es P1,P3." << std::endl;
                    } else {
                        std::cout << "La respuesta es P1." << std::endl;
                    }
                }
            }
        return 0;
    }
}