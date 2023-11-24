// fish.h
#pragma once
#include "ani.h"

class fish : public animal {
public:
    fish() : nFins(2) { };

    int nFins;
    void swim() { std::cout << " I swim \n"; }
};
