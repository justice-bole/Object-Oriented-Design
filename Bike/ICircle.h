//
// Created by Justice Bole on 10/11/22.
//

#ifndef BIKE_ICIRCLE_H
#define BIKE_ICIRCLE_H

class ICircle
{
public:
    [[nodiscard]] virtual float diameter() const = 0;
};

#endif //BIKE_ICIRCLE_H
