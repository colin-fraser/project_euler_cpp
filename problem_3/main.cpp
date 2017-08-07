#include <iostream>
#include <cmath>
#include <vector>

long long n = 600851475143;



std::vector<long long int> two_factors(long long int n) {
    long long int p {2};
    std::vector<long long int> facs;
    while (n % p != 0) {
        if (p * p > n) {
            facs.push_back(n);
            return facs;
        }
        p++;
    }
    facs.push_back(p);
    facs.push_back(n/p);
    return facs;
}

long long int largest_factor(long long int n) {
    std::vector<long long int> facs = {n};
    while (true) {
        long long int max_f = facs.back();
        std::vector<long long int> new_facs = two_factors(max_f);
        if (new_facs.size() == 1) {
            return max_f;
        }
        facs.pop_back();
        for (int i = 0; i < 2; i++) {
            facs.push_back(new_facs[i]);
        }
    }
}




int main() {
    std::cout << "The largest prime factor of " << n << " is " << largest_factor(n) << std::endl;
    return 0;
}