#pragma once

#include "key_data.h"

key_data_t test_data[] = {
    {0, 0x00000000, "", 0, 0, 0, 0, 0},
    {1, 0x11223344, "KEY_UP", MODE_REPEAT, 9, 100, +1, 0},
    {2, 0x55667788, "KEY_DOWN", MODE_REPEAT, 9, 100, -1, 0},
    {3, 0x99AABBCC, "KEY_LEFT", MODE_REPEAT, 9, 1000, -10, 0},
    {4, 0xDDEEFF00, "KEY_RIGHT", MODE_REPEAT, 9, 1000, +10, 0},
    {5, 0xAABBCCDD, "KEY_100%", MODE_HOLD, 9, 255, +1, 0},
    {6, 0xBABADEDA, "KEY_50%", MODE_HOLD, 9, 128, 1, 0},
    {7, 0x00110022, "KEY_25%", MODE_HOLD, 9, 64, +10, 0},
    {8, 0x00220033, "KEY_>", MODE_REPEAT, 9, 100, -10, 0},
    {9, 0x00330044, "KEY_^", MODE_REPEAT, 9, 10000, +100, 0},
    {10, 0x00550066, "KEY_v", MODE_REPEAT, 9, 10000, +100, 0},
    {11, 0x00000000, "KEY_0", MODE_TOGGLE, 9, 100, +1, 0},
    {12, 0x11111111, "KEY_1", MODE_TOGGLE, 9, 110, +1, 0},
    {13, 0x22222222, "KEY_2", MODE_TOGGLE, 9, 120, +1, 0},
    {14, 0x33333333, "KEY_3", MODE_TOGGLE, 9, 130, +1, 0},
    {15, 0x44444444, "KEY_4", MODE_TOGGLE, 9, 140, +1, 0},
    {16, 0x55555544, "KEY_5", MODE_TOGGLE, 9, 150, +1, 0},
    {17, 0x66666666, "KEY_6", MODE_TOGGLE, 9, 160, +1, 0},
    {18, 0x77777777, "KEY_7", MODE_TOGGLE, 9, 170, +1, 0},
    {19, 0x88888888, "KEY_8", MODE_TOGGLE, 9, 180, +1, 0},
    {21, 0x99999999, "KEY_9", MODE_TOGGLE, 9, 190, +1, 0},


};

