#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z;
    bool sujetando;

public:
    // Constructor
    BrazoRobotico(double x = 0, double y = 0, double z = 0, bool sujetando = false);

    // Métodos consultores
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    // Métodos funcionales
    void coger();
    void soltar();
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

