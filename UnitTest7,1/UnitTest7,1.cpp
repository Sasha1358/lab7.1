#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.1/OddAverageCalculator.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> testData = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
			OddAverageCalculator calculator(testData);

			// Act
			double result = calculator.calculateAverageOfOdd();

			// Assert
			Assert::AreEqual(5.0, result);
		}
	};
}
