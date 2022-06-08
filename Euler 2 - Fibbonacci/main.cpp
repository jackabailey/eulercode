#include <iostream>

int main() {
    std::cout << "Euler 2 - Even Fibonacci" << std::endl;
    long num1 = 1;
    long num2 = 1;
    long current = 0;
    long sum = 0;

    while (current < 4000000){
        if ((current % 2) == 0){
            sum += current;
        }
        current = num1 + num2;
        num2 = num1;
        num1 = current;
    }

    std::cout << sum << std::endl;

    return 0;
}
