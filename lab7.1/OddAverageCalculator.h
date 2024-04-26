#pragma once
#include <vector>
class OddAverageCalculator
{
private:
    std::vector<int> data;

public:
    OddAverageCalculator(const std::vector<int>& input_data);
    double calculateAverageOfOdd() const;
};

