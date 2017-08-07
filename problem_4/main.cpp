#include <iostream>
#include <vector>
#include <cmath>

int solution() {
    for (int i = 9; i >= 0; i--) {
        for (int j = 9; j >= 0; j--) {
            for (int k = 9; k >= 0; k--) {
                int pal = 100001 * i + 10010 * j + 1100 * k;
                for (int n = (int) sqrt(pal); n < 1000; n++) {
                    if (pal % n == 0) {
                        if (pal / n < 1000) {
                            return pal;
                        }
                    }
                }
            }
        }
    }
}


int main() {
    std::cout << solution() << std::endl;
    return 0;
}