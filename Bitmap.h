//
// Created by Alessandro Gravagno on 06/06/2026.
//

#ifndef FRACTALCREATOR_BITMAP_H
#define FRACTALCREATOR_BITMAP_H
#include <string>
#include <cstdint>
#include <memory>
using namespace std;

class Bitmap {
private:
    int m_width{0};
    int m_height{0};
    unique_ptr<uint8_t[]> m_pPixels{nullptr};


public:
    Bitmap(int width, int height);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
    bool write(const string& filename) const;
    virtual ~Bitmap();
};

#endif //FRACTALCREATOR_BITMAP_H
