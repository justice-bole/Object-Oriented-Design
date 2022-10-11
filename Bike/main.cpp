#include <iostream>

#include "Gear.h"

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
    std::cout << wheel.circumfrence() << '\n';
    Gear gear{52, 11, wheel};
    std::cout << gear.gearInches() << '\n' << gear.ratio() << '\n';

    return 0;
}
