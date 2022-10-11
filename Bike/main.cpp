#include <iostream>

#include "Gear.h"
#include "Wheel.h"

int main() {
    //1
//    Gear bigGear{52,11};
//    Gear littleGear{30,27};
//    std::cout << "Big gear: " << bigGear.ratio() << "\nLittle gear: " << littleGear.ratio() << '\n';

// 2
//    Gear bigTire{52,11, 26, 1.5};
//    Gear littleTire{52,11, 24, 1.25};
//    std::cout << "Big gear: " << bigTire.gearInches() << "\nLittle gear: " << littleTire.gearInches() << '\n';

    Wheel wheel{26, 1.5};
    Donut donut{2};

    std::cout << wheel.circumference() << '\n';
    Gear gear{52, 11, &wheel};
    Gear gearD{52, 11, &donut};

    std::cout << gear.gearInches() << '\n' << gear.ratio() << '\n';
    std::cout << gearD.gearInches() << '\n'; //Gear's gearInches method now works with any type that has a diameter method

    return 0;
}
