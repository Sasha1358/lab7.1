#include "OddAverageCalculator.h"
#include <algorithm>
#include <numeric>
#include <iterator> // Додано для використання back_inserter
#include <functional> // Додано для використання лямбда-функції

OddAverageCalculator::OddAverageCalculator(const std::vector<int>& input_data) : data(input_data) {}

double OddAverageCalculator::calculateAverageOfOdd() const {
    std::vector<int> oddNumbers;
    std::copy_if(data.begin(), data.end(), std::back_inserter(oddNumbers), [](int i) { return i % 2 != 0; });

    double average = std::accumulate(oddNumbers.begin(), oddNumbers.end(), 0) / static_cast<double>(oddNumbers.size());

    return average;
}
