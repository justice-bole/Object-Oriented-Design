//
// Created by Justice Bole on 10/10/22.
//

#ifndef BIKE_GEAR_H
#define BIKE_GEAR_H

#include "ICircle.h"

class Gear
{
private:
    int m_chainring{};
    int m_cogs{};
    ICircle* m_circle{};

public:
    Gear(int rings, int cogs, ICircle* circle) :
    m_chainring{rings}, m_cogs{cogs}, m_circle {circle} {}

    [[nodiscard]] float ratio() const {
        return static_cast<float>(chainRing()) / static_cast<float>(cogs());
    }

    [[nodiscard]] float gearInches() const {
        return static_cast<float>(circle()->diameter() * ratio());
    }

    [[nodiscard]] int chainRing() const { return m_chainring; }
    [[nodiscard]] int cogs() const { return m_cogs; }
    [[nodiscard]] ICircle* circle() const { return m_circle; }

};

#endif //BIKE_GEAR_H
