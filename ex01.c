#include <stdio.h>

int prox_id(void) {
    static int id = 0;
    return id;
}

int main(void) {

    for (int i = 0; i < 5; i++) {
        printf("%d ", prox_id());
    }

    printf("\n");

    return 0;
}