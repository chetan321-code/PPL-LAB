#include <stdio.h>

void main() {
    int i, j;

    i = 2;
    if(i <= 100) {
        j = 2;
    }
    if(j < i && i % j != 0) {
        j = j + 1;
    }
    else {
        if(i == j) {
            printf("%d \n", i);
        }
        else {
            i = i + 1;
        }
    }
    return;
}