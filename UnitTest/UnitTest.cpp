#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_3/Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 3.0;
			double expected = (cos(x) * cos(x) + 1) / exp(x);

			double actual = s(x);

			Assert::AreEqual(expected, actual, 0.000001);
		}
	};
}
