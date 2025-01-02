#include <iostream>
#include "BrazoRobotico.h"

int main() {
    BrazoRobotico brazo;

    // Mover el brazo
    brazo.mover(1.5, 2.0, 3.0);
    std::cout << "Brazo movido a: (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")\n";

    // Coger un objeto
    brazo.coger();
    std::cout << "Brazo está sujetando: " << (brazo.estaSujetando() ? "Sí" : "No") << "\n";

    // Soltar el objeto
    brazo.soltar();
    std::cout << "Brazo está sujetando: " << (brazo.estaSujetando() ? "Sí" : "No") << "\n";

    return 0;
}

