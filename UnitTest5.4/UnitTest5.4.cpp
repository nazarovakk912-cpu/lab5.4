#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4/lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int K = 3, N = 3; // лише одне значення
			double expected = (sin(cos(3.0))) / (1 + pow(cos(3.0), 2));
			double eps = 1e-10;

			Assert::AreEqual(expected, S0(K, N), eps);
			Assert::AreEqual(expected, S1(K, N, K), eps);
			Assert::AreEqual(expected, S2(K, N, N), eps);
			Assert::AreEqual(expected, S3(K, N, K, 0), eps);
			Assert::AreEqual(expected, S4(K, N, N, 0), eps);
		}
	};
}
