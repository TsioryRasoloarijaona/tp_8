//
// Created by tsiory on 12/25/24.
//

#include "Heure.h"


int Heure::convert(int h, int m, int s) {
    return (h * 3600 + m * 60 + s);
}

int Heure::convert(int h, int m) {
    return (h * 3600 + m * 60);
}

int Heure::convert(int h) {
    return h *3600;
}
