//
// Created by Alessandro Gravagno on 10/06/2026.
//

#ifndef FRACTALCREATOR_ZOOM_H
#define FRACTALCREATOR_ZOOM_H

struct Zoom {
    int x{0};
    int y{0};
    double scale{0.0};
    Zoom(int x, int y, double scale) : x(x), y(y), scale(scale) {};
};



#endif //FRACTALCREATOR_ZOOM_H
