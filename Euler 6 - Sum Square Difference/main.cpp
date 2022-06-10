#include <iostream>

int main() {
    std::cout << "Euler 6 - Sum Square Difference" << std::endl;

    int squaresum = 0;
    int sumsquare = 0;

    // Step 1 - Find the sum of squares 1-100
    for (int i = 1; i < 101; i++){
        squaresum = squaresum + (i * i);
        printf("%i\n", squaresum);
    }
    for (int i = 1; i < 101; i++){
        sumsquare += i;
    }
    sumsquare = sumsquare * sumsquare;

    int s = sumsquare - squaresum;
    printf("%i", s);

    return 0;
}
