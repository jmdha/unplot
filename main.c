#define STB_IMAGE_IMPLEMENTATION

#include <stdio.h>
#include "unplot.h"

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Missing argument\n");
        return 1;
    }
    const char *path = argv[1];
    int len;
    float *vals;
    int ec;
    if ((ec = unplot(&len, &vals, path)) != 0) {
        printf("Failed to unplot image with error code %d\n", ec);
        return 2;
    }
    for (unsigned int i = 0; i < len; i++) {
        printf("%f", vals[i]);
        if (i < len - 1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
