#include "Trio.h"

Trio::Trio(int x, int y, int z) : Pair(x, y) {
    _z = z;
}

int Trio::multiply() {
    return Pair::multiply() * _z;
}

int Trio::add() {
    return Pair::add() + _z;
}