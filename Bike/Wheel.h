//
// Created by Justice Bole on 10/11/22.
//

#ifndef BIKE_WHEEL_H
#define BIKE_WHEEL_H

#include <cmath>

class Wheel {
private:
    float m_rimDiameter{};
    float m_tireDiameter{};

public:
    Wheel() = default;

    Wheel(float rimD, float tireD) :
    m_rimDiameter{rimD}, m_tireDiameter{tireD} { }

    [[nodiscard]] float diameter() const {
        return rimDiameter() + (tireDiameter() * 2); // 2. using a Wheel struct instead of class
    }

    [[nodiscard]] float circumfrence() const
    {
        return M_PI * diameter();
    }

    [[nodiscard]] float rimDiameter() const { return m_rimDiameter; }
    [[nodiscard]] float tireDiameter() const { return m_tireDiameter; }
};

#endif //BIKE_WHEEL_H
