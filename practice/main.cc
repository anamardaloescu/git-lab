#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <vector>
#include <immintrin.h>
#include <sys/random.h>

int main() {
    srand(time(NULL));

    // 5 metode de random
    int r1 = rand() % 200;              // metoda 1
    std::random_device rd;              
    int r2 = rd() % 200;                // metoda 2
    int r3 = rand() % 200;              // metoda 3 (poți să folosești mt19937)
    int r4;                             
    getrandom(&r4, sizeof(r4), 0);      // metoda 4
    unsigned int r5;
    _rdrand32_step(&r5);                // metoda 5

    std::cout << "Randoms: " << r1 << ", " << r2 << ", " << r3 << ", " << r4 << ", " << r5 << "\n";
}