# unplot

A simple program to convert a univariate plot to its corresponding series

Original | Generated Series | Reconstructed
:-:|:-:|:-:
![sine](https://github.com/user-attachments/assets/c0cb91cd-03c7-459c-81a1-d706cbbcc223) | 398 398.5 399 400 401 401.5 402.5 403.5 404 405 405.5 406.5 ... | ![plt](https://github.com/user-attachments/assets/6b0e1f7a-4fdd-4186-adda-9fa29bbabd99)


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
