//
// Created by Justice Bole on 10/10/22.
//

#ifndef BIKE_GEAR_H
#define BIKE_GEAR_H

#include "Wheel.h"

class Gear
{
private:
    //1.instead of making a new Wheel class, try out a struct in a theoretical case where a new class can't be made due to constraints
//    struct Wheel //2. moved to class
//    {
//        float rimDiameter{};
//        float tireDiameter{};
//    };

    int m_chainring{};
    int m_cogs{};
    Wheel m_wheel{};

public:
    Gear(int rings, int cogs, Wheel wheel) :
    m_chainring{rings}, m_cogs{cogs}, m_wheel {wheel} {}
    //single responsibility. Methods should only do ONE thing
    [[nodiscard]] float ratio() const {
        //return static_cast<float>(m_chainring) / m_cogs; //1. instead of directly accessing use a getter
        return static_cast<float>(chainRing()) / cogs();
    }

    [[nodiscard]] float gearInches() const {
        return static_cast<float>(wheel().diameter() * ratio()); // uses wheel class diameter method now
        //return (m_rimDiameter + (m_tireDiameter * 2)) * ratio(); <-- Put diameter calc in own method below
    }
    // 3. create Wheel class and move this method into it
//    [[nodiscard]] float diameter() const { // 1. This probably belongs in a wheel class, not gear
//        //return static_cast<float>(m_rimDiameter + (m_tireDiameter * 2));
//        return m_wheel.tireDiameter + (m_wheel.rimDiameter * 2); // 2. using a Wheel struct instead of class
//    }

    //getters allow data to be changed easily later, for instance
    //[[nodiscard]] int chainRing() const { return m_chainring * unanticipated_adjustment_factor; }
    //[[nodiscard]] int chainRing() const {return m_chainRing * (foo? ? bar_adjustment : baz_adjustment)

    [[nodiscard]] int chainRing() const { return m_chainring; }
    [[nodiscard]] int cogs() const { return m_cogs; }
    [[nodiscard]] Wheel wheel() const { return m_wheel; }

    //moved to Wheel class
    //[[nodiscard]] float rimDiameter() const { return m_wheel.rimDiameter; }
    //[[nodiscard]] float tirediameter() const { return m_wheel.tireDiameter; }

};

#endif //BIKE_GEAR_H
