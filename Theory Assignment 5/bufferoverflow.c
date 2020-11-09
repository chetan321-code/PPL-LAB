#include <stdio.h>

int main() {
    int array[10];
    for(int i = 0; i < 10000; i++) {
        array[i] = i;
    }
    return 0;
}