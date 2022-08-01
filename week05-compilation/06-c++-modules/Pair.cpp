#include "Pair.h"

Pair::Pair(int x, int y) {
    _x = x;
    _y = y;
}

int Pair::multiply() {
    return _x * _y;
}

int Pair::add() {
    return _x + _y;
}