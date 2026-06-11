//
// Created by Alessandro Gravagno on 03/06/2026.
//
#ifndef FRACTALCREATOR_BITMAPINFOHEADER_H
#define FRACTALCREATOR_BITMAPINFOHEADER_H

#include <cstdint>

#pragma pack(push, 1)
struct BitmapInfoHeader {
    uint32_t headerSize{sizeof(BitmapInfoHeader)}; // 4 byte (Consigliato: fa 40 in automatico)
    int32_t width;                                  // 4 byte
    int32_t height;                                 // 4 byte
    uint16_t planes{1};                             // 2 byte
    uint16_t bitsPerPixel{24};                      // 2 byte
    uint32_t compression{0};                        // 4 byte
    uint32_t dataSize{0};                           // 4 byte
    int32_t horizontalResolution{2400};             // 4 byte
    int32_t verticalResolution{2400};               // 4 byte
    uint32_t colors{0};                             // 4 byte
    uint32_t importantColors{0};                    // 4 byte
};
#pragma pack(pop)

#endif //FRACTALCREATOR_BITMAPINFOHEADER_H
