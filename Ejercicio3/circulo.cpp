namespace Geometria {
    class Circulo {
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14159 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14159 * radio;
        }
    };
}
