//
// Created by Justice Bole on 10/11/22.
//

#ifndef BIKE_WHEEL_H
#define BIKE_WHEEL_H

#include <cmath>
#include "ICircle.h"

class Wheel : public ICircle {
private:
    float m_rimDiameter{};
    float m_tireDiameter{};

public:
    Wheel() = default;

    Wheel(float rimD, float tireD) :
    m_rimDiameter{rimD}, m_tireDiameter{tireD} { }

    [[nodiscard]] float diameter() const override {
        return rimDiameter() + (tireDiameter() * 2); // 2. using a Wheel struct instead of class
    }

    [[nodiscard]] float circumference() const {
        return M_PI * diameter();
    }

    [[nodiscard]] float rimDiameter() const { return m_rimDiameter; }
    [[nodiscard]] float tireDiameter() const { return m_tireDiameter; }
};

class Donut : public ICircle {
private:
    float m_diameter{};

public:
    explicit Donut(float d) : m_diameter{d} { }

    [[nodiscard]] float diameter() const override {
        return m_diameter;
    }
};

#endif //BIKE_WHEEL_H
