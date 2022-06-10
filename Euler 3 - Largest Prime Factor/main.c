#include <stdio.h>

int main() {
    printf("Euler 3 - Largest Prime Factor\n");
    long n = 600851475143;
    int i = 2;
    while (i * i < n) {
        while (n % i == 0) {
            n /= i;
        }
        i++;
    }
    printf("Largest Prime is: %i \n", n);
    return 0;
}
