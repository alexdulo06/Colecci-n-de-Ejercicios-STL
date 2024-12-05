#include <iostream>
#include <vector>
#include <map>
#include <set>

void mostrarContenedores() {
    // Vector
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    std::cout << "Vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Map
    std::map<std::string, int> edades;
    edades["Juan"] = 25;
    edades["Maria"] = 30;
    std::cout << "Mapa: ";
    for (const auto& par : edades) {
        std::cout << par.first << " -> " << par.second << ", ";
    }
    std::cout << "\n";

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    std::cout << "Set: ";
    for (int num : conjunto) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}
