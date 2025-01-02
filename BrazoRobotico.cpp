#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando)
    : x(x), y(y), z(z), sujetando(sujetando) {}

double BrazoRobotico::getX() const { return x; }
double BrazoRobotico::getY() const { return y; }
double BrazoRobotico::getZ() const { return z; }
bool BrazoRobotico::estaSujetando() const { return sujetando; }

void BrazoRobotico::coger() { sujetando = true; }
void BrazoRobotico::soltar() { sujetando = false; }
void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
}

