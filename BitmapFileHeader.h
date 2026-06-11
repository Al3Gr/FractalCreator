//
// Created by Alessandro Gravagno on 03/06/2026.
//

#ifndef FRACTALCREATOR_BITMAPFILEHEADER_H
#define FRACTALCREATOR_BITMAPFILEHEADER_H

#include <cstdint>

#pragma pack(push, 1)
struct BitmapFileHeader {
    char header[2] {'B', 'M'}; // 2 byte
    uint32_t fileSize;         // 4 byte
    uint16_t reserved1{0};     // 2 byte (FIXED: diviso in due short)
    uint16_t reserved2{0};     // 2 byte
    uint32_t dataOffset;       // 4 byte - Ora si trova esattamente al byte 14!
};
#pragma pack(pop)

#endif //FRACTALCREATOR_BITMAPFILEHEADER_H
