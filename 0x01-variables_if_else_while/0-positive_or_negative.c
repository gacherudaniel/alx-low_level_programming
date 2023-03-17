#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n = rand() % 201 - 100; // random number between -100 and 100 (inclusive)

    printf("The number %d ", n);
    
    if (n > 0) {
        printf("is positive\n");
    } else if (n < 0) {
        printf("is negative\n");
    } else {
        printf("is zero\n");
    }

    return 0;
}
