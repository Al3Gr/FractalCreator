//
// Created by Alessandro Gravagno on 11/06/2026.
//

#ifndef FRACTALCREATOR_RGB_H
#define FRACTALCREATOR_RGB_H



struct RGB {
    double r;
    double g;
    double b;
    RGB(double r, double g, double b);

};
RGB operator-(const RGB& first, const RGB& second);


#endif //FRACTALCREATOR_RGB_H
