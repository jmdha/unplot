# unplot
A simple program to convert a univariate plot to its corresponding series

## Building
Uses [stb](https://github.com/nothings/stb) image library, which is included, however that requires math. As such to build simply link math.

```
git clone https://github.com/jmdha/unplot.git && \
cd unplot && \
gcc main.c -lm
```
## Performance
Time to convert an image of size "width" x "height" in pixels. Includes file operations, reading, etc...

1000  x 600:   0.02s

20000 x 20000: 0.5s
