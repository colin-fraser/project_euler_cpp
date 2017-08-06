#include <iostream>

// problem 1
const int max = 1000;

int sum_divisible_by(int n) {
    int sum_to = (max - 1) / n;
    return n * sum_to * (sum_to + 1) / 2;
}

int main() {
    std::cout << sum_divisible_by(5) + sum_divisible_by(3) - sum_divisible_by(15) << std::endl;
    return 0;
}