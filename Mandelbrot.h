//
// Created by Alessandro Gravagno on 08/06/2026.
//

#ifndef FRACTALCREATOR_MANDELBROT_H
#define FRACTALCREATOR_MANDELBROT_H



class Mandelbrot {
public:
    static const int MAX_ITERATIONS = 500;

public:
    Mandelbrot();
    virtual ~Mandelbrot();

    static int getIterations(double x, double y);
};


#endif //FRACTALCREATOR_MANDELBROT_H
