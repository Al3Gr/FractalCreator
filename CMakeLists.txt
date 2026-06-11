cmake_minimum_required(VERSION 4.2)
project(FractalCreator)

set(CMAKE_CXX_STANDARD 20)

add_executable(FractalCreator main.cpp
        BitmapFileHeader.h
        BitmapInfoHeader.h
        Bitmap.cpp
        Bitmap.h
        Mandelbrot.cpp
        Mandelbrot.h
        Zoom.h
        ZoomList.cpp
        ZoomList.h
        FractalCreator.cpp
        FractalCreator.h
        RGB.cpp
        RGB.h
)
