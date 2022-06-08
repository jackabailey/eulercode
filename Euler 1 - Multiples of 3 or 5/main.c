#include <stdio.h>

int main() {
    printf("Project Euler Task 1 - Multiples of 3 or 5\n");

    int sum = 0;
    for (int i = 1; i < 1000; i++) {
        printf("Is %i a multiple of 3 or 5? \n", i);
        if (i % 3 == 0){
            sum += i;
        } else if (i % 5 == 0){
            sum += i;
        }
        printf("Sum Is: %i\n", sum);
    }

    return 0;
}
