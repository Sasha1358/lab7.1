#include <iostream>
#include <vector>
#include <ctime>
#include "OddAverageCalculator.h"
#include <algorithm>

int main() {
    srand(unsigned(time(0)));
    int n;
    std::cout << "n =  ";
    std::cin >> n;

    std::vector<int> v(n);
    std::generate(v.begin(), v.end(), []() { return rand() % 100; });

    std::cout << "Array: ";
    for (int i : v)
        std::cout << i << " ";
    std::cout << std::endl;

    OddAverageCalculator calculator(v);
    double average = calculator.calculateAverageOfOdd();

    std::cout << "Average of odd numbers: " << average << std::endl;

    return 0;
}
