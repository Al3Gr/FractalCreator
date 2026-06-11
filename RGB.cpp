//
// Created by Alessandro Gravagno on 11/06/2026.
//

#include "RGB.h"

RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {
    // TODO Auto-generated constructor stub
}

RGB operator-(const RGB& first, const RGB& second) {
    return {first.r - second.r,first.g - second.g,first.b - second.b};
}