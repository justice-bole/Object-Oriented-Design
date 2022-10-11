#include <iostream>

#include "Gear.h"
#include "Wheel.h"

int main() {
    Wheel wheel{26, 1.5};
    Donut donut{2};

    std::cout << wheel.circumference() << '\n';
    Gear gear{52, 11, &wheel};
    Gear gearD{52, 11, &donut};

    std::cout << gear.gearInches() << '\n' << gear.ratio() << '\n';
    std::cout << gearD.gearInches() << '\n';

    return 0;
}
