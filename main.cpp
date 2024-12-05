#include <iostream>
#include "Ejercicio1/matematicas.cpp"
#include "Ejercicio2/triangulo.cpp"
#include "Ejercicio2/circulo.cpp"
#include "Ejercicio3/circulo.cpp"
#include "Ejercicio4/fisica.cpp"
#include "Ejercicio5/contenedores.cpp"

int main() {
    std::cout << "Ejercicio 1: Utilización de un espacio de nombres\n";
    std::cout << "Suma: " << Matematicas::suma(5, 3) << "\n";
    std::cout << "Resta: " << Matematicas::resta(5, 3) << "\n";

    std::cout << "\nEjercicio 2: Espacio de nombres repartido entre diferentes archivos\n";
    std::cout << "Área del triángulo: " << Geometria::calcularAreaTriangulo(5, 3) << "\n";
    std::cout << "Área del círculo: " << Geometria::calcularAreaCirculo(3) << "\n";

    std::cout << "\nEjercicio 3: Relación entre clase y espacio de nombres\n";
    Geometria::Circulo c(5);
    std::cout << "Área del círculo: " << c.calcularArea() << "\n";
    std::cout << "Perímetro del círculo: " << c.calcularPerimetro() << "\n";

    std::cout << "\nEjercicio 4: Subespacios de nombres\n";
    double masa = 10.0;
    std::cout << "Energía (masa = 10 kg): " << Ciencia::Fisica::calcularEnergia(masa) << "\n";

    std::cout << "\nEjercicio 5: Presentación de la STL\n";
    mostrarContenedores();

    return 0;
}
