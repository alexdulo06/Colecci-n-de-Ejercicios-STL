namespace Ciencia {
    namespace Fisica {
        const double velocidadDeLaLuz = 299792458.0;
        double calcularEnergia(double masa) {
            return masa * velocidadDeLaLuz * velocidadDeLaLuz;
        }
    }
}
