#include <iostream>

// Fonction récursive pour calculer la factorielle
unsigned long long factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main() {
    int N;
    std::cout << "Entrez un entier positif pour calculer sa factorielle : ";
    std::cin >> N;
    
    if (N < 0) {
        std::cout << "La factorielle n'est pas définie pour les entiers négatifs." << std::endl;
    } else {
        unsigned long long resultat = factorielle(N);
        std::cout << "La factorielle de " << N << " est : " << resultat << std::endl;
    }
    
    return 0;
}
