#include <iostream>

const int ceiling = 4000000;

int main() {

    int even_fib_sum = 0;
    int cur_fib = 1;
    int last_fib = 1;
    int counter = 0;

    while (cur_fib < ceiling) {
        int temp = cur_fib;
        cur_fib = cur_fib + last_fib;
        last_fib = temp;
        if (counter % 3 == 0) {  // every third fib number is even...
            even_fib_sum += cur_fib;
        }
        counter ++;
    }

    std::cout << even_fib_sum << std::endl;
    return 0;
}