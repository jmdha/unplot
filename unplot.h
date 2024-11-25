#ifndef UNPLOT_H
#define UNPLOT_H

#include <stdlib.h>
#include "stb_image.h"

static inline int unplot_bg(unsigned char *data, int x, int y) {
    unsigned long long total = 0;

    for (unsigned int i = 0; i < x; i++)
        for (unsigned int t = 0; t < y; t++)
            total += data[t * x + i];

    return total / (x * y);
}

static inline int unplot(int *len, float **vals, const char *path) {
    int x, y, n;
    unsigned char *data = stbi_load(path, &x, &y, &n, 1);
    if (!data)
        return 1;
    *len  = x;
    *vals = (float*) malloc(sizeof(float) * x);
    int bg = unplot_bg(data, x, y);
    for (int i = 0; i < x; i++) {
        int count = 0;
        int total = 0;
        for (int t = 0; t < y; t++) {
            int val = data[t * x + i];
            if (abs(val - bg) > 10) {
                count += 1;
                total += t;
            }
        }
        (*vals)[i] = total / (float) count;
    }
    stbi_image_free(data);
    return 0;
}

#endif
