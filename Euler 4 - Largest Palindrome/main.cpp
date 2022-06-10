#include <iostream>
#include <string>
using namespace std;

int main() {
    std::cout << "Euler 4 - Largest Palindrome of 3 digit products" << std::endl;

    int palindrome = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++){
            int t = i * j;
            string ts = to_string(t);
            if (t < 100000) {
                if (ts[0] == ts[4] && ts[1] == ts[3]) {
                    if (t >= palindrome){
                        palindrome = t;
                        std::cout << "\n" << palindrome << std::endl;
                    }
                }
            } else {
                if (ts[0] == ts[5] && ts[1] == ts[4] && ts[2] == ts[3]) {
                    if (t >= palindrome){
                        palindrome = t;
                        std::cout << "\n" << palindrome << std::endl;
                    }
                }
            }
        }
    }

    std::cout << "\npalindrome is " << palindrome << std::endl;

    return 0;
}
